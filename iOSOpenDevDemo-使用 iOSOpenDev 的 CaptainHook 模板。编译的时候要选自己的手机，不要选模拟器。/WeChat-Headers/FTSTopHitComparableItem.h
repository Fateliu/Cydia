//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTSTopHitComparableItem : NSObject
{
    unsigned int _clickScore;
    id _topHitItem;
    NSString *_typeKey;
}

@property(nonatomic) unsigned int clickScore; // @synthesize clickScore=_clickScore;
@property(retain, nonatomic) NSString *typeKey; // @synthesize typeKey=_typeKey;
@property(retain, nonatomic) id topHitItem; // @synthesize topHitItem=_topHitItem;
- (void).cxx_destruct;
- (long long)compareUsingClickScore:(id)arg1;

@end

