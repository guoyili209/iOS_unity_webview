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

@interface WebViewController : UIViewController<WKScriptMessageHandler>
-(void)HideWebView;
-(void)ShowWebView;
@property WKWebView *webview;
@property NSString *url;

@end

#endif /* WebViewController_h */
