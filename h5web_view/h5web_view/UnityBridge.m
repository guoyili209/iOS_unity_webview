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
-(void)OCMessage:(NSString *)json{
    NSString *gameObjName = [UnityBridge SharedObject].gameObjectName;
    NSString *OCMessageMethodName = [UnityBridge SharedObject].methodName;
    UnitySendMessage((char*)[gameObjName UTF8String],(char*)[OCMessageMethodName UTF8String] , (char*)[json UTF8String]);
}
@end
