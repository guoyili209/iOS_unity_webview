//
//  WebView.m
//  h5web_view
//
//  Created by admin on 2022/10/26.
//

#import <Foundation/Foundation.h>
#import "HFiveGameTool.h"
#import "UnityBridge.h"

typedef NS_ENUM(NSInteger,HFiveMessageType){
    OpenGame=100,
    ChargeFinish=101,
    PlayAdsFinish=102,
    
    PlayAds=201,
    CloseGame=202,
    StartCharge=203,
    ThinkingEvent=204
};

@implementation HFiveGameTool


void CSharpMessage(char *json){
    NSError *e=nil;
    NSString *string = [[NSString alloc] initWithCString:json encoding:NSUTF8StringEncoding];
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *jsonDic = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:&e];
    if(!jsonDic){
        NSLog(@"Error parsing JSON:%@",e);
    }else{
        NSLog(@"Item:%@",jsonDic);
        NSString *url = [jsonDic valueForKey:@"url"];
        NSLog(@"url:%@",url);
        int msgType = [[jsonDic valueForKey:@"msgType"] intValue];
        NSString *gameObjName =[jsonDic valueForKey:@"gameObjName"];
        NSString *OCMessageMethodName =[jsonDic valueForKey:@"OCMessageMethodName"];
        
        [UnityBridge SharedObject].gameObjectName = gameObjName;
        [UnityBridge SharedObject].methodName =OCMessageMethodName;
        
        if([UnityBridge SharedObject].wvc==nil){
            [UnityBridge SharedObject].wvc = [WebViewController new];
        }
        NSLog(@"wvc:%@",[UnityBridge SharedObject].wvc);
        [UnityBridge SharedObject].wvc.url = url;
        [[UnityBridge SharedObject].wvc ShowWebView];
        [UnityBridge SharedObject].data = string;
        if(msgType==OpenGame){
//            NSDictionary *myDictionary = [[NSDictionary alloc] initWithObjectsAndKeys:@"value1", @"key1",@"value2", @"key2", nil];
////            NSMutableDictionary *mutableDictionary = [myDictionary mutableCopy];
//            NSData *data = [NSJSONSerialization dataWithJSONObject:myDictionary
//            options:NSJSONWritingPrettyPrinted error:nil];
//            NSString *jsonString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
            
//            UnitySendMessage((char*)[gameObjName UTF8String],(char*)[OCMessageMethodName UTF8String] , (char*)[jsonString UTF8String]);
        }else if(msgType == ChargeFinish){
            
        }else if(msgType == PlayAdsFinish){
            
        }
    }
    
}
@end
