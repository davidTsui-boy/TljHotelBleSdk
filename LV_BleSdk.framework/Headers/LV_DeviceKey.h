//
//  LV_DeviceKey.h
//  BleSdk
//
//  Created by DavyCui on 2019/6/11.
//  Copyright © 2019 DavyCui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LV_BluetoothDevice.h"
#import "LV_PhoneKey.h"

NS_ASSUME_NONNULL_BEGIN

@interface LV_DeviceKey : NSObject<NSCopying,NSMutableCopying>
@property (nullable,nonatomic,strong) LV_BluetoothDevice *bluetoothDevice;
@property (nullable,nonatomic,strong) LV_PhoneKey *phoneKey;
@end

NS_ASSUME_NONNULL_END
