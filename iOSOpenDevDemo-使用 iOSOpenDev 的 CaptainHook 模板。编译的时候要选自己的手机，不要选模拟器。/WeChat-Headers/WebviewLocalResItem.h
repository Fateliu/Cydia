//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WebviewLocalResItem : MMObject <PBCoding>
{
    NSString *_localResId;
    NSString *_savePath;
    NSString *_svrId;
    NSString *_appId;
    NSString *_cdnUrl;
    NSString *_cdnAESKey;
    unsigned int _fileSize;
    NSString *_mediaType;
    NSString *_fileExt;
    _Bool needMediaId;
    _Bool _bNeedStorage;
    unsigned int fileSize;
    NSString *localResId;
    NSString *savePath;
    NSString *svrId;
    NSString *appId;
    NSString *cdnUrl;
    NSString *cdnAESKey;
    NSString *mediaType;
    NSString *fileExt;
    NSString *fileUrl;
}

+ (void)initialize;
@property(nonatomic) _Bool bNeedStorage; // @synthesize bNeedStorage=_bNeedStorage;
@property(nonatomic) _Bool needMediaId; // @synthesize needMediaId;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *cdnAESKey; // @synthesize cdnAESKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *svrId; // @synthesize svrId;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath;
@property(retain, nonatomic) NSString *localResId; // @synthesize localResId;
- (void).cxx_destruct;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

