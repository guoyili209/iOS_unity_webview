//
//  WebViewController.h
//  h5web_view
//
//  Created by admin on 2022/10/27.
//

#ifndef WebViewController_h
#define WebViewController_h

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface WebViewController : NSObject<WKScriptMessageHandler>
-(void)HideWebView;
-(void)ShowWebView;
-(void)EvaluateJS:(NSString *)js;
@property (nonatomic,strong) WKWebView *webview;
@property (nonatomic,strong) NSString *url;

@end

#endif /* WebViewController_h */
