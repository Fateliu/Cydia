//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"
#import "PasswordLogicDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableViewInfo, NSString, PasswordLogic, WCActionSheet;

@interface NewSettingViewController : MMUIViewController <WCActionSheetDelegate, WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, PBMessageObserverDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    PasswordLogic *m_checkPasswdLogic;
    WCActionSheet *m_logOutActionSheet;
    _Bool m_bFromSetting;
}

- (void).cxx_destruct;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)showFeedbackView;
- (void)showSystemNotice;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryQuit;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)finalQuit;
- (void)quitInternal;
- (void)showQuitActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)willAppear;
- (void)makeMyAccountCell:(id)arg1 cellInfo:(id)arg2;
- (void)showIpadClassicChooseView;
- (void)showAccountView;
- (void)reloadTableData;
- (void)showAboutMMView;
- (void)showEmotionShopView;
- (void)showAuthAppListView;
- (void)showGeneralView;
- (void)showDeviceListView;
- (void)showPrivateConfigView;
- (void)showNotificationView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

