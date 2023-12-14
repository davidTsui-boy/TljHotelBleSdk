//
//  LV_BluetoothDevice.h
//  BleSdk
//
//  Created by DavyCui on 2019/6/11.
//  Copyright © 2019 DavyCui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CBPeripheral.h>

@interface LV_BluetoothDevice : NSObject<NSCopying,NSMutableCopying>
@property (nonatomic,assign) NSInteger doorType;      //，
@property (nonatomic,assign) NSInteger areaID;
@property (nonatomic,assign) NSInteger buildingID;
@property (nonatomic,assign) NSInteger floorID;
@property (nonatomic,assign) NSInteger roomID;
@property (nonatomic,assign) NSInteger suiteID;
@property (nonatomic,assign) NSInteger publicDoorID;
@property (nonatomic,assign) NSInteger liftID;
@property (nullable, nonatomic, strong) NSString *authCode;
@property (nullable,nonatomic,strong) CBPeripheral *discoveredPeripheral;
@property (nullable,nonatomic,strong) NSDictionary *advertisementData;
@property (nullable,nonatomic,strong) NSNumber *RSSI;
@property (nullable,nonatomic,strong) NSString *advertisementDataStr;

@property (nonatomic,assign) NSInteger lockedState;
@property (nonatomic,assign) NSInteger doubleLockState;
@property (nonatomic,assign) NSInteger battery;
@property (nonatomic,assign) NSInteger lowVoltage;

@end
