//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtobufEvent.h"

@interface WeAppNewYearEvent : ProtobufEvent
{
}

- (id)getWeAppNewYearAesKeyWithUin:(unsigned int)arg1 nonce:(unsigned int)arg2 reportKeyVersion:(unsigned int)arg3 reportKey:(id)arg4;
- (void)OnCmdRecv;
- (int)UnPack:(const struct AutoBuffer *)arg1 SvrID:(struct AutoBuffer *)arg2;
- (_Bool)Pack:(struct AutoBuffer *)arg1;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;

@end

