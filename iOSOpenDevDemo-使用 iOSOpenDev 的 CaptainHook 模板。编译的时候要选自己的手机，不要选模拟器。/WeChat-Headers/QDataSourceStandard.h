//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QDataSourceBase.h"

@interface QDataSourceStandard : QDataSourceBase
{
}

+ (id)dataSourceStandard:(id)arg1 sceneId:(id)arg2 version:(id)arg3;
+ (id)dataSourceStandard:(id)arg1 sceneId:(id)arg2;
- (int)tileType;
- (_Bool)shouldCollectRequestTime;
- (id)tilePath:(CDStruct_74b02b43)arg1;
- (double)tileSize;

// Remaining properties
@property(retain, nonatomic) id <QDataCacheProtocol> dataCache;

@end

