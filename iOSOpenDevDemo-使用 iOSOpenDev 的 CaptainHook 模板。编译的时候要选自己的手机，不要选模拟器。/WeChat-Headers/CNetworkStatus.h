//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface CNetworkStatus : MMService <MMService>
{
    unsigned int m_uiLastStatus;
    id <NetworkStatusDelegate> m_delNetworkStatus;
}

+ (void)AsyncGetWifiInfo:(CDUnknownBlockType)arg1;
+ (void)GetWifiInfo:(id *)arg1 BSSID:(id *)arg2;
+ (_Bool)isSimCard4G;
+ (_Bool)isSimCardSupport3GPlus;
+ (id)getSimCardType;
+ (id)getCarrierName;
+ (id)GetCarrier;
+ (void)GetCTNetworkInfo;
+ (id)descriptionForNetType:(int)arg1;
- (_Bool)isOnWifiOrOver2G;
- (_Bool)isReachable;
- (unsigned int)getNewNetType;
- (int)getNetworkType;
- (_Bool)isOnWifi;
- (_Bool)isOnWWan;
- (void)ChangeReach;
- (_Bool)isiOS9Plus;
- (void)Stop;
- (void)Start:(id)arg1;
- (void)PingReach;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

