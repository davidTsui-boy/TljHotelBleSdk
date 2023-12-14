//
//  LV_NetAction.h
//  BleSdk
//
//  Created by DavyCui on 2019/6/18.
//  Copyright © 2019 DavyCui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LV_Blocks.h"
#import "LV_KeyOpenList.h"


NS_ASSUME_NONNULL_BEGIN

@interface LV_NetAction : NSObject
+(void)authToken:(NSString *)companyCode companyLicenseCode:(NSString *)companyLicenseCode hotelCode:(NSString *) hotelCode hotelName:(NSString*) hotelName hotelKeyCode:(NSString*) hotelKeyCode resultBlock:(ResultBlock)resultBlock;

+(void)cancelUserInfo:(NSString *)accessToken emailAddress:(NSString *)emailAddress resultBlock:(ResultBlock)resultBlock;

+ (void)loadSDKDoorKeys:(NSString *)accessToken emailAddress:(NSString *)emailAddress resultBlock:(ResultBlock)resultBlock;

+(void)addKeyOpenRecord:(NSString *)accessToken keyOpenList:(LV_KeyOpenList *) keyOpenList resultBlock:(ResultBlock)resultBlock;

@end

NS_ASSUME_NONNULL_END
