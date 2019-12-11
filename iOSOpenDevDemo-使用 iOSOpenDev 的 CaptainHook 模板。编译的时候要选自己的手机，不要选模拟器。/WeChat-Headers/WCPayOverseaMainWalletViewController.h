//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayNoticeBannerViewDelegate.h"
#import "WCPayOverseaIBGGetWalletCgiDelegate.h"
#import "WCPayOverseaPayFunctionListCgiDelegate.h"

@class NSString, UICollectionView, WCBizLoadingView, WCPayNoticeBannerView, WCPayOverseaIBGGetWalletCgi, WCPayOverseaIBGGetWalletCgiCache, WCPayOverseaMainWalletDataSource, WCPayOverseaPayFunctionListCgi, WCPayOverseaPayFunctionListRespObject, WCPayOverseaReadActivityList;

@interface WCPayOverseaMainWalletViewController : WCBizBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCPayOverseaPayFunctionListCgiDelegate, WCPayOverseaIBGGetWalletCgiDelegate, WCActionSheetDelegate, WCPayNoticeBannerViewDelegate>
{
    unsigned int _m_walletRegion;
    unsigned int _m_lastWalletCgiRequestTime;
    WCPayOverseaPayFunctionListCgi *_m_payFunctionCgi;
    WCPayOverseaIBGGetWalletCgi *_m_ibgGetWalletCgi;
    UICollectionView *_m_collectionView;
    WCPayNoticeBannerView *_m_noticeBannerView;
    WCBizLoadingView *_m_bizLoadingView;
    WCPayOverseaMainWalletDataSource *_m_dataSource;
    WCPayOverseaPayFunctionListRespObject *_m_payFunctionListRespObject;
    WCPayOverseaIBGGetWalletCgiCache *_m_walletResp;
    WCPayOverseaReadActivityList *_m_readActivityList;
}

@property(nonatomic) unsigned int m_lastWalletCgiRequestTime; // @synthesize m_lastWalletCgiRequestTime=_m_lastWalletCgiRequestTime;
@property(nonatomic) unsigned int m_walletRegion; // @synthesize m_walletRegion=_m_walletRegion;
@property(retain, nonatomic) WCPayOverseaReadActivityList *m_readActivityList; // @synthesize m_readActivityList=_m_readActivityList;
@property(retain, nonatomic) WCPayOverseaIBGGetWalletCgiCache *m_walletResp; // @synthesize m_walletResp=_m_walletResp;
@property(retain, nonatomic) WCPayOverseaPayFunctionListRespObject *m_payFunctionListRespObject; // @synthesize m_payFunctionListRespObject=_m_payFunctionListRespObject;
@property(retain, nonatomic) WCPayOverseaMainWalletDataSource *m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(retain, nonatomic) WCBizLoadingView *m_bizLoadingView; // @synthesize m_bizLoadingView=_m_bizLoadingView;
@property(retain, nonatomic) WCPayNoticeBannerView *m_noticeBannerView; // @synthesize m_noticeBannerView=_m_noticeBannerView;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
@property(retain, nonatomic) WCPayOverseaIBGGetWalletCgi *m_ibgGetWalletCgi; // @synthesize m_ibgGetWalletCgi=_m_ibgGetWalletCgi;
@property(retain, nonatomic) WCPayOverseaPayFunctionListCgi *m_payFunctionCgi; // @synthesize m_payFunctionCgi=_m_payFunctionCgi;
- (void).cxx_destruct;
- (void)reportGrayItemClickOnUrl:(id)arg1;
- (void)reportClickOnUrl:(id)arg1 funcid:(unsigned int)arg2;
- (void)onWCPayNoticeBannerView:(id)arg1 clickWithUrl:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)utf8String:(id)arg1;
- (void)onWCPayOverseaIBGGetWalletCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaIBGGetWalletCgiOkWithRespObject:(id)arg1;
- (void)onWCPayOverseaPayFunctionCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaPayFunctionCgiOkWithRespObject:(id)arg1;
- (unsigned long long)rowCount;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateCollectionView;
- (void)viewDidLayoutSubviews;
- (void)onClickRightNavigationItem:(id)arg1;
- (void)updateRightNavigationItem;
- (void)updateTitle;
- (void)stopBizLoading;
- (void)startBizLoading;
- (void)updateBizLoadingView;
- (void)updateNoticeBannerView;
- (void)updateTips;
- (void)updateViewData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

