//
//  WebViewController.m
//  h5web_view
//
//  Created by admin on 2022/10/27.
//

#import <Foundation/Foundation.h>
#import "WebViewController.h"
#import "HFiveGameTool.h"
#import "UnityBridge.h"


@implementation WebViewController
-(void)close_webView:(UIButton *) sender{
    [self HideWebView];
}
-(void)HideWebView{
    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:@"JSMessage"];
    if([self.webview isKindOfClass:[WKWebView class]]){
        //        self.webview.UIDelegate = nil;
        //        self.webview.navigationDelegate = nil;
    }
    [self.webview stopLoading];
    [self.webview removeFromSuperview];
    //    [self.webview removeObserver:self forKeyPath:@"loading"];
    self.webview=nil;
}
-(void)ShowWebView{
    NSLog(@"open webview");
    
    [self DidShowWebView];
    
    //    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"Title" message:@"Message" preferredStyle:UIAlertControllerStyleActionSheet];
    //    [self presentViewController:alert animated:YES completion:^{
    //        dispatch_after(dispatch_time(DISPATCH_TIME_NOW,(int64_t)(1*NSEC_PER_SEC)),
    //                       dispatch_get_main_queue(),^{
    //            [alert dismissViewControllerAnimated:YES completion:^{
    //
    //            }];
    //        });
    //    }];
    
    
//    UIButton *closebtn = [[UIButton alloc]initWithFrame:CGRectMake(100,100,100,100)];
//    //    UIButton *closebtn = [UIButton buttonWithType:UIButtonTypeCustom];
//    closebtn.titleLabel.font = [UIFont fontWithName:@"" size:20];
//    [closebtn setTitle:@"Hello, World!" forState:UIControlStateNormal];
//    //    closebtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
//    [closebtn setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
//
//    [closebtn addTarget:self action:@selector(close_webView:) forControlEvents:UIControlEventTouchUpInside];
//    [UnityGetGLViewController().view addSubview:closebtn];
}
-(void)DidShowWebView{
    // Do any additional setup after loading the view.
    WKWebViewConfiguration *configuration = [[WKWebViewConfiguration alloc] init];
    configuration.selectionGranularity = WKSelectionGranularityDynamic;
    configuration.allowsInlineMediaPlayback = YES;
    
    WKUserContentController *userContent = [[WKUserContentController alloc] init];
    [userContent addScriptMessageHandler:self name:@"JSMessage"];
    
    configuration.userContentController = userContent;
    configuration.websiteDataStore = [WKWebsiteDataStore defaultDataStore];
    //---
    WKPreferences *preferences = [WKPreferences new];
    preferences.javaScriptCanOpenWindowsAutomatically = YES;
    if (@available(iOS 13.0, *)) {
        WKWebpagePreferences *webpagePreference = [WKWebpagePreferences new];
        if (@available(iOS 14.0, *)) {
            webpagePreference.allowsContentJavaScript = YES;
        } else {
            // Fallback on earlier versions
        }
        configuration.preferences = preferences;
        configuration.defaultWebpagePreferences = webpagePreference;
    } else {
        // Fallback on earlier versions
    }
    //---
    self.webview = [[WKWebView alloc] initWithFrame:[UIScreen mainScreen].bounds configuration:configuration];
    //    NSURL *url_ = [NSURL URLWithString:@"http://192.168.11.206:3000/index.html"];
    NSURL *url_ = [NSURL URLWithString:self.url];
    NSURLRequest *request = [NSURLRequest requestWithURL:url_];
    NSLog(@"add view");
    [UnityGetGLViewController().view addSubview:self.webview];
    NSLog(@"load");
    [self.webview loadRequest:request];
    
    //    webview.UIDelegate = self;
    //    webview.navigationDelegate = self;
    //    [webview evaluateJavaScript:@"showAlert('传参')"  completionHandler:^(id _Nullable, NSError * _Nullable error) {
    //
    //    }];
}

//---WKScriptMessageHandler---
-(void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message{
    if([@"JSMessage" isEqualToString:message.name]){
        NSLog(@"message.body:%@",message.body);
//        [self EvaluateJS:@"window.OCMessage('hello JS')"];
        if([@"GetLoginData" isEqualToString:message.body]){
            NSString *method1 = @"window.OCMessage('";
            NSString *method2 = [method1 stringByAppendingFormat:@"%@", [UnityBridge SharedObject].data];
            NSString *method3 = [method2 stringByAppendingString:@"')"];
            [self EvaluateJS:method3];
        }else if([@"CloseWebView" isEqualToString:message.body]){
            [self HideWebView];
        }else{
            [[UnityBridge SharedObject] OCMessage:message.body];
        }
    }
}
- (void)EvaluateJS:(NSString *)js
{
    if (self.webview == nil)
        return;
    //    NSString *jsStr = [NSString stringWithUTF8String:js];
    NSLog(@"js code:%@",js);
    [self.webview evaluateJavaScript:js completionHandler:^(NSString *result, NSError *error) {
        if(error!=nil){
            NSLog(@"js error:%@",error);
        }else{
            NSLog(@"js result:%@", result);
        }
    }];
}
-(void)viewWillAppear:(BOOL)animated{
    //    [super viewWillAppear:animated];
    //    [self.webview.configuration.userContentController addScriptMessageHandler:self name:@"JSMessage"];
    //    [self.webview.configuration.userContentController addScriptMessageHandler:self name:JS_goPageSelectClass];
    //    [self.webview.configuration.userContentController addScriptMessageHandler:self name:JS_goClasscardList];
}
-(void)viewWillDisappear:(BOOL)animated{
    //    [super viewWillDisappear:animated];
    //    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:@"JSMessage"];
    //    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:JS_goPageSelectClass];
    //    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:JS_goClasscardList];
}
//window.webkit.messageHandlers.JSMessage.postMessage(参数)
@end
