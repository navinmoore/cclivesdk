//
//  cclivesdk.h
//  cclivesdk
//
//  Created by navin on 16/7/21.
//  Copyright © 2016年 capitalcloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RDLiveSDK.h"
#import "RSA.h"


@interface cclivesdk : NSObject

{
    RDLiveSDK * rtmpPlayer;
}




/*
 - (instancetype)init:(void (^)(RDLiveAuthorizationType))successBlock error:(void (^)(NSError *))errorBlock;
 */

- (void)setrtmpPlayer:(void (^)(RDLiveAuthorizationType))successBlock error:(void (^)(NSError *))errorBlock;

-(void)setrtmpPlayer_url:(NSString *)url;

-(void)setrtmpPlayer_frame;

-(void)setrtmpPlayer_Delegate:(id) x;

-(UIView *)get_playerview;

-(void)play;

- (NSDictionary *) request_token:(NSString *)userName andWithpassword: (NSString *)passWord;
- (NSArray *)request_channellist:(NSString *)token;


@end
