//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EnterpriseSearchResultItem : NSObject
{
    unsigned int _matchField;
    NSString *_matchText;
    NSObject *_item;
}

@property(retain, nonatomic) NSObject *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *matchText; // @synthesize matchText=_matchText;
@property(nonatomic) unsigned int matchField; // @synthesize matchField=_matchField;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 matchField:(unsigned int)arg2 matchText:(id)arg3;

@end

