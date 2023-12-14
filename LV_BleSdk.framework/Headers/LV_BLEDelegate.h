//
//  LV_BLEDelegate.h
//  BleSdk
//
//  Created by DavyCui on 2019/6/11.
//  Copyright © 2019 DavyCui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LV_BluetoothDevice.h"
#import "LV_KeyOpenList.h"
#import "LV_DeviceKey.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LV_BLEDelegate <NSObject>      

// @required


@optional

-(void)foundBLEDevice:(LV_BluetoothDevice *) bluetoothDevice;
-(void)centralManagerUpdateState:(NSInteger) state;


-(void)onDeviceConnected:(LV_DeviceKey *) deviceKey;

-(void)onDeviceDisConnected:(LV_DeviceKey *) deviceKey;

-(void)onDoorOpened:(LV_DeviceKey *) deviceKey doorRecord:(LV_KeyOpenList *) doorRecord;

-(void)onDoorOpenFail:(LV_DeviceKey *) deviceKey errorCode:(int)errorCode lightsCount:(int) lightsCount;






@end

NS_ASSUME_NONNULL_END
