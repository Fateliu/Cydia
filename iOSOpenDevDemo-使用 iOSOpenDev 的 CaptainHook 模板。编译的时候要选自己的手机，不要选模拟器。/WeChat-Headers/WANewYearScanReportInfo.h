//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface WANewYearScanReportInfo : NSObject <PBCoding>
{
    NSMutableDictionary *dicItem;
}

+ (void)saveScanReportInfo:(id)arg1 toPath:(id)arg2;
+ (id)scanReportInfoFromPath:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dicItem; // @synthesize dicItem;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

