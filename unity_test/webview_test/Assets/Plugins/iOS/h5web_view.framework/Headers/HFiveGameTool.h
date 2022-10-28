//
//  WebView.h
//  h5web_view
//
//  Created by admin on 2022/10/26.
//

#ifndef WebView_h
#define WebView_h
#import <UIKit/UIKit.h>
@interface HFiveGameTool:NSObject

@end

#if defined (__cplusplus)
extern
extern "C"{
#endif
UIViewController *UnityGetGLViewController(void);
void CSharpMessage(int msgType,char * json);
void UnitySendMessage(char *className,char *methodName,char *param);
#if defined (__cplusplus)
}
#endif

#endif /* WebView_h */
