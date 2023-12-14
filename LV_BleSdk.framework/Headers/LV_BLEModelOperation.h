//
//  LV_BLEModelOperation.h
//  BLELOCK
//
//  Created by Davy  on 2018/8/10.
//  Copyright © 2018 davy. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <CoreBluetooth/CoreBluetooth.h>
#import "LV_BLEDelegate.h"
#import "LV_DeviceKey.h"


typedef enum OpenErrorCode{
    ConnectTimeOut=4,  //
    DiscoverServiceFailure=5, //
    DiscoverCharacteristicFailure=6, //
    WriteMessageError=7,     //
    ReviceMessageError=8,     //
    OpenedError1=9,  //
    OpenedError2=10,  //
    OpenedError3=11,  //
    OpenedError4=12,  //
    OpenedError8=13,  //
    OpenedError=14,  //
    UnknowError=15,         //
    
}OpenErrorCode;




@interface LV_BLEModelOperation : NSObject
/**
 
 */
@property (nullable,nonatomic,strong) NSString *BLEName;
@property (nullable,nonatomic,strong) NSString *BLEServiceID;
@property (nullable,nonatomic,strong) NSString *BLEServiceReadID;
@property (nullable,nonatomic,strong) NSString *BLEServiceWriteID;


@property (nullable,nonatomic,strong) NSString *connectState;//

@property (nullable,nonatomic, weak) id<LV_BLEDelegate> delegate;


-(instancetype _Nullable )initWithDelegate:(id <LV_BLEDelegate>_Nullable)delegate;



-(void)startScan;

-(void)stopScan;

-(void)openDoor:(LV_DeviceKey *_Nonnull)currDevice;

-(void)cancelPeripheralConnection;

@end
