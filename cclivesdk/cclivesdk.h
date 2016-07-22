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

}

@property (nonatomic, readonly) UIView *playerView;

- (instancetype)init:(void (^)(RDLiveAuthorizationType))successBlock error:(void (^)(NSError *))errorBlock;

- (void)setUrl:(NSString *)url;

- (void)setPlayerviewframe:(NSInteger) x withY:(NSInteger) y withWidth:(NSInteger)width withHeight:(NSInteger) height;

- (void)play;

-(void)setPlayerDelegate;

-(void) losePlayerDelegate;

@end
