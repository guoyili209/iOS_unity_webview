//
//  UnityBridge.h
//  h5web_view
//
//  Created by admin on 2022/10/27.
//

#ifndef UnityBridge_h
#define UnityBridge_h
#import "WebViewController.h"

@interface UnityBridge:NSObject
+(UnityBridge *)SharedObject;
@property WebViewController *wvc;
@end
#endif /* UnityBridge_h */
