//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface VoiceTransRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientVoiceId; // @dynamic clientVoiceId;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int fetchVoiceIdCount; // @dynamic fetchVoiceIdCount;
@property(retain, nonatomic) NSMutableArray *fetchVoiceIds; // @dynamic fetchVoiceIds;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int seq; // @dynamic seq;
@property(nonatomic) unsigned int voiceEncodeType; // @dynamic voiceEncodeType;

@end

