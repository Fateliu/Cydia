//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeixinContentLogicController.h"

#import "WAContactMgrExtension.h"
#import "WASessionContentLogicHandlerDelegate.h"

@class NSDictionary, NSString, WASessionContentLogicHandler;

@interface WASessionContentLogicController : WeixinContentLogicController <WAContactMgrExtension, WASessionContentLogicHandlerDelegate>
{
    WASessionContentLogicHandler *_sessionLogichandler;
    unsigned int _appVersion;
    unsigned long long _enterScene;
    NSDictionary *_dicSessionContentContext;
    NSString *_sceneID;
    unsigned long long _debugMode;
}

@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned long long debugMode; // @synthesize debugMode=_debugMode;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(retain, nonatomic) NSDictionary *dicSessionContentContext; // @synthesize dicSessionContentContext=_dicSessionContentContext;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (void).cxx_destruct;
- (void)onClickRightBarButton:(id)arg1;
- (unsigned int)getAppVersion;
- (unsigned long long)getDebugMode;
- (id)getSessionSceneID;
- (id)getSessionContentPageID;
- (unsigned long long)getSessionContentEnterScene;
- (id)getSessionContentViewController;
- (id)getSessionContentNavigationController;
- (id)getSessionContentContact;
- (id)GetTitleTailImage;
- (_Bool)CanRemoteRecord;
- (void)initViewController;
- (void)UnRegister;
- (void)Register;
- (void)onModifyWeAppContact:(id)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ViewDidAppear;
- (void)ViewWillInit;
- (void)CustomToolViewEX:(id)arg1;
- (void)onClickWeAppReceiveSessionMsg;
- (id)getPreviewForLink:(id)arg1;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (id)GetRightBarBtn;
- (id)getLeftBarButton;
- (_Bool)canShowChatRoomInfo;
- (_Bool)ShouldShowForwardFromSingleChatMode;
- (_Bool)CanShowSight;
- (_Bool)CanShowBanner;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanWXTalk;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanAddApp;
- (_Bool)CanOpenCamera;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendVoiceMsg;
- (void)dealloc;
- (id)initWithSceneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

