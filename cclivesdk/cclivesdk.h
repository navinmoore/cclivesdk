//
//  cclivesdk.h
//  cclivesdk
//
//  Created by navin on 16/7/21.
//  Copyright © 2016年 capitalcloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RDLiveSDK.h"



@interface cclivesdk : NSObject

{
    RDLiveSDK * rtmpPlayer;
    int num;
    UILabel *timelabel;
    NSTimer *timeNow;
    
    UILabel * control;
    UIButton *full;
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

-(void)stop;

- (void)setMute:(BOOL)value;


- (void)getLiveInfoWithUid:(NSString *)userID
                   success:(void (^)(NSDictionary *liveInfoDic))successBlock
                     error:(void (^)(NSError *error))errorBlock;


- (UIImage *)get_rtmpPlayerSnapshot;

- (void)set_full;

-(void)set_window;


- (NSDictionary *) request_token:(NSString *)userName andWithpassword: (NSString *)passWord;
- (NSArray *)request_channellist:(NSString *)token;

+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
// return raw data
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
// return base64 encoded string
// enc with private key NOT working YET!
//+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;
// return raw data
//+ (NSData *)encryptData:(NSData *)data privateKey:(NSString *)privKey;

// decrypt base64 encoded string, convert result to string(not base64 encoded)
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;


@end
