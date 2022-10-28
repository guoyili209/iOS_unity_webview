//
//  UnityBridge.m
//  h5web_view
//
//  Created by admin on 2022/10/27.
//

#import <Foundation/Foundation.h>
#import "UnityBridge.h"
#import "HFiveGameTool.h"

@implementation UnityBridge
+(UnityBridge *)SharedObject{
    static UnityBridge *sharedClass=nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken,^{
        sharedClass = [[self alloc] init];
    });
    return sharedClass;
}
@end
