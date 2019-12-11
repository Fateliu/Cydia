//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterEntranceInfo, GameCenterMsgBubbleInfo, NSString;

@interface GameCenterNotifyContent : NSObject
{
    int _type;
    int _msgReportType;
    unsigned int _localId;
    GameCenterEntranceInfo *_entranceInfo;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    NSString *_floatLayerUrl;
    NSString *_svrMsgId;
    NSString *_appId;
    NSString *_noticeId;
    NSString *_originMsg;
}

@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) int msgReportType; // @synthesize msgReportType=_msgReportType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *floatLayerUrl; // @synthesize floatLayerUrl=_floatLayerUrl;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) GameCenterEntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
- (void).cxx_destruct;
- (int)entranceNotifyType;

@end

