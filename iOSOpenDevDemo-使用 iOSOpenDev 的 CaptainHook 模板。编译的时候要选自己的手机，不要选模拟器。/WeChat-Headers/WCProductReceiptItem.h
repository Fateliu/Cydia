//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCProductReceiptItem : NSObject <PBCoding>
{
    NSString *sourceText;
    NSString *pingyinText;
    NSString *firstLetterText;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *firstLetterText; // @synthesize firstLetterText;
@property(retain, nonatomic) NSString *pingyinText; // @synthesize pingyinText;
@property(retain, nonatomic) NSString *sourceText; // @synthesize sourceText;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

