//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface MMResConfigInfo : MMObject <WCDBCoding>
{
    unsigned int configCrc32;
    NSString *configId;
    NSString *configResoureces;
    NSString *configUrl;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int configCrc32; // @synthesize configCrc32;
@property(retain, nonatomic) NSString *configUrl; // @synthesize configUrl;
@property(retain, nonatomic) NSString *configResoureces; // @synthesize configResoureces;
@property(retain, nonatomic) NSString *configId; // @synthesize configId;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_configCrc32;
- (const WCDBCondition_22fabacd *)db_configUrl;
- (const WCDBCondition_22fabacd *)db_configResoureces;
- (const WCDBCondition_22fabacd *)db_configId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

