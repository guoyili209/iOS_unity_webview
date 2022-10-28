//
//  WebViewController.m
//  h5web_view
//
//  Created by admin on 2022/10/27.
//

#import <Foundation/Foundation.h>
#import "WebViewController.h"
#import "HFiveGameTool.h"


@implementation WebViewController
-(void)close_webView:(UIButton *) sender{
    [self HideWebView];
}
-(void)HideWebView{
    [self willMoveToParentViewController:nil];
    [self.view removeFromSuperview];
    [self removeFromParentViewController];
}
-(void)ShowWebView{
    NSLog(@"open webview");
    UIViewController *resultVC;
    UIApplication *application = [UIApplication sharedApplication];
    UIWindow *keyWindow=[self _findKeyWindow:application];
    resultVC = [keyWindow rootViewController];
    while (resultVC.presentedViewController) {
        resultVC = [self _topViewController:resultVC.presentedViewController];
    }
//    [resultVC addChildViewController:self];
    [UnityGetGLViewController() addChildViewController:self];
    
    [self DidShowWebView];
    
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"Title" message:@"Message" preferredStyle:UIAlertControllerStyleActionSheet];
    [self presentViewController:alert animated:YES completion:^{
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW,(int64_t)(1*NSEC_PER_SEC)),
                       dispatch_get_main_queue(),^{
            [alert dismissViewControllerAnimated:YES completion:^{
                
            }];
        });
    }];
    
    
    UIButton *closebtn = [[UIButton alloc]initWithFrame:CGRectMake(100,100,100,100)];
    //    UIButton *closebtn = [UIButton buttonWithType:UIButtonTypeCustom];
    closebtn.titleLabel.font = [UIFont fontWithName:@"" size:20];
    [closebtn setTitle:@"Hello, World!" forState:UIControlStateNormal];
    //    closebtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    [closebtn setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    
    [closebtn addTarget:self action:@selector(close_webView:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:closebtn];
    
}
-(void)DidShowWebView{
    
    
    // Do any additional setup after loading the view.
    WKWebViewConfiguration *configuration = [[WKWebViewConfiguration alloc] init];
    configuration.selectionGranularity = WKSelectionGranularityDynamic;
    configuration.allowsInlineMediaPlayback = YES;
    
    WKUserContentController *userContent = [[WKUserContentController alloc] init];
    //    [userContent addScriptMessageHandler:self name:@"NativeMethod"];
    
    configuration.userContentController = userContent;
    
    WKPreferences *preferences = [WKPreferences new];
    preferences.javaScriptCanOpenWindowsAutomatically = YES;
    WKWebpagePreferences *webpagePreference = [WKWebpagePreferences new];
    webpagePreference.allowsContentJavaScript = YES;
    configuration.preferences = preferences;
    configuration.defaultWebpagePreferences = webpagePreference;
    
    self.webview = [[WKWebView alloc] initWithFrame:[UIScreen mainScreen].bounds configuration:configuration];
//    NSURL *url_ = [NSURL URLWithString:@"http://192.168.11.206:3000/index.html"];
    NSURL *url_ = [NSURL URLWithString:self.url];
    NSURLRequest *request = [NSURLRequest requestWithURL:url_];
    NSLog(@"load");
    [self.webview loadRequest:request];
    NSLog(@"add view");
    [self.view addSubview:self.webview];
//    NSLog(@"add controller");
//    [UnityGetGLViewController().view addSubview:self.webview];
    
    //    webview.UIDelegate = self;
    //    webview.navigationDelegate = self;
    //    [webview evaluateJavaScript:@"showAlert('传参')"  completionHandler:^(id _Nullable, NSError * _Nullable error) {
    //
    //    }];
}
-(UIWindow *)_findKeyWindow:(UIApplication *)application{
    UIWindow *keyWindow = nil;
    if(@available(iOS 13.0,*)){
        for(UIScene *secen in application.connectedScenes){
            if(secen.activationState==UISceneActivationStateForegroundActive){
                UIWindowScene *windowScene = nil;
                if([secen isKindOfClass:[UIWindowScene class]]){
                    windowScene = (UIWindowScene *)secen;
                }
                if(@available(iOS 15.0,*)){
                    keyWindow = windowScene.keyWindow;
                    break;
                }else{
                    for(UIWindow *window in windowScene.windows){
                        if(window.isKeyWindow){
                            keyWindow = window;
                            break;
                        }
                    }
                }
            }
        }
        if(!keyWindow){
            keyWindow = application.keyWindow;
        }
    }else{
        keyWindow = application.keyWindow;
    }
    return keyWindow;
}
-(UIViewController *)_topViewController:(UIViewController *)vc{
    if([vc isKindOfClass:[UINavigationController class]]){
        return [self _topViewController:[(UINavigationController *)vc topViewController]];
    }else if([vc isKindOfClass:[UITabBarController class]]){
        return [self _topViewController:[(UITabBarController *)vc selectedViewController]];
    }else{
        return vc;
    }
    return nil;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self ShowWebView];
}
//---WKScriptMessageHandler---
-(void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message{
    if([@"NativeMethod" isEqualToString:message.name]){
        if([@"close" isEqualToString:message.body]){
            
        }
    }
}
-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.webview.configuration.userContentController addScriptMessageHandler:self name:@"NativeMethod"];
    //    [self.webview.configuration.userContentController addScriptMessageHandler:self name:JS_goPageSelectClass];
    //    [self.webview.configuration.userContentController addScriptMessageHandler:self name:JS_goClasscardList];
}
-(void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:@"NativeMethod"];
    //    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:JS_goPageSelectClass];
    //    [self.webview.configuration.userContentController removeScriptMessageHandlerForName:JS_goClasscardList];
}
//window.webkit.messageHandlers.方法名.postMessage(参数)
@end
