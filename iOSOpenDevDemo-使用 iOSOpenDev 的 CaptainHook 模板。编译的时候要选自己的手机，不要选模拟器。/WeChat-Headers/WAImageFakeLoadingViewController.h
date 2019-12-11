//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class CContact, DotLoadingView, MMUILabel, MMWebImageView, NSString, UIImage, UIView, WAAppMsgItem;

@interface WAImageFakeLoadingViewController : MMUIViewController <UIViewControllerAnimatedTransitioning>
{
    NSString *m_userName;
    CContact *m_contact;
    _Bool m_isBlackStatusBar;
    _Bool m_isNeedLoading;
    UIView *m_fakeNavBar;
    UIView *m_backgroundView;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    MMWebImageView *m_imageView;
    DotLoadingView *m_loadingView;
    struct CGRect m_originFrame;
    _Bool m_bShow;
    NSString *m_backColorStr;
    unsigned long long m_scene;
    NSString *m_pagePath;
    NSString *m_sceneNote;
    NSString *m_appid;
    NSString *m_navTitle;
    WAAppMsgItem *m_appMsgItem;
    UIImage *m_thumbImage;
}

- (void).cxx_destruct;
- (double)currentImageHeight:(double)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)loadCacheLoadingConfig:(id)arg1;
- (void)onReturn;
- (void)initLoadingView;
- (void)initImageView;
- (void)initContactTitleWithNavMode:(int)arg1;
- (void)initLeftBarItemWithNavMode:(int)arg1;
- (void)initViewBackToForgroundWithNavColor:(id)arg1 navStyle:(int)arg2;
- (void)setupNavMode;
- (void)configUI;
- (void)changeStatusBarToBlack:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setThumbImage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithMsgAppItem:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 title:(id)arg4 originFrame:(struct CGRect)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

