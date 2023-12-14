//
//  LV_PhoneKey.h
//  BleSdk
//
//  Created by DavyCui on 2019/6/19.
//  Copyright © 2019 DavyCui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LV_PhoneKey : NSObject<NSCopying,NSMutableCopying>
@property (nonatomic,assign) NSInteger kid;
@property (nonatomic,assign) NSInteger doorType;      //
@property (nonatomic,assign) NSInteger areaID;      //
@property (nonatomic,assign) NSInteger buildingID;      //
@property (nonatomic,assign) NSInteger floorID;      //
@property (nonatomic,assign) NSInteger roomID;      //
@property (nonatomic,assign) NSInteger suiteID;      //
@property (nonatomic,assign) NSInteger publicDoorID;      //
@property (nullable, nonatomic, strong) NSString *uEmailAddress;
@property (nullable, nonatomic, strong) NSString *hotelName;
@property (nullable, nonatomic, strong) NSString *hotelCode;
@property (nullable, nonatomic, strong) NSString *roomName;
@property (nullable, nonatomic, strong) NSString *keyStartTime;
@property (nullable, nonatomic, strong) NSString *keyEndTime;
@property (nullable, nonatomic, strong) NSString *keyContent;
@property (nullable, nonatomic, strong) NSString *authCode;
@property (nullable, nonatomic, strong) NSString *doorDetailInfo;
@property (nonatomic,assign) NSInteger handsFreeState;
@property (nonatomic,assign) NSInteger semiHandsFreeState;
@property (nonatomic,assign) NSInteger doubleLockState;
@property (nonatomic,assign) NSInteger lockStayOpenState;
@property (nullable, nonatomic, strong) NSString *lastOpenTime;
@property (nullable, nonatomic, strong) NSString *lastOpenDoorName;

@end

NS_ASSUME_NONNULL_END
