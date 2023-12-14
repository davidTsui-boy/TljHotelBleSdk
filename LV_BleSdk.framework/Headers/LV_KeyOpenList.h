//
//  LV_KeyOpenList.h
//  BleSdk
//
//  Created by DavyCui on 2019/6/14.
//  Copyright © 2019 DavyCui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LV_KeyOpenList : NSObject<NSCopying,NSMutableCopying>
@property (nonatomic,assign) NSInteger kid;
@property (nullable, nonatomic, strong) NSString *uEmailAddress;
@property (nullable, nonatomic, strong) NSString *hotelName;
@property (nullable, nonatomic, strong) NSString *hotelCode;
@property (nonatomic,assign) NSInteger cardType;
@property (nonatomic,assign) NSInteger doorType;
@property (nullable, nonatomic, strong) NSString *roomName;
@property (nonatomic,assign) NSInteger areaNum;
@property (nonatomic,assign) NSInteger buildingNum;
@property (nonatomic,assign) NSInteger floorNum;
@property (nonatomic,assign) NSInteger roomNum;
@property (nonatomic,assign) NSInteger suiteNum;
@property (nonatomic,assign) NSInteger publicDoorNum;
@property (nonatomic,assign) NSInteger lowPower;
@property (nullable, nonatomic, strong) NSString *doorInstallInfo;
@property (nullable, nonatomic, strong) NSDate *openTime;
@property (nullable, nonatomic, strong) NSDate *buTime;
@end

NS_ASSUME_NONNULL_END
