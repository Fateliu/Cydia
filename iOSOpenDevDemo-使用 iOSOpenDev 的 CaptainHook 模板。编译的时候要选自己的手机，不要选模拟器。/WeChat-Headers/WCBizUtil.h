//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCBizUtil : NSObject
{
}

+ (id)getActionLocation;
+ (void)reportLocationAlert:(int)arg1 type:(int)arg2;
+ (id)parseRealnameGuideInfo:(id)arg1 alertViewScene:(int)arg2;
+ (void)logRealnameAction:(int)arg1;
+ (id)getBankResource:(id)arg1;
+ (void)logBannerUserAction:(int)arg1 bannerType:(int)arg2;
+ (void)playCoinSound;
+ (void)bizReportBannerUserAction:(int)arg1 bannType:(int)arg2;
+ (id)GetWCBizMainWindow;
+ (void)SetWCBizMainWindow:(id)arg1;
+ (void)ClearWCBizMainWindow;
+ (id)getTempFullPathOfYearHBImageForSender:(id)arg1;
+ (id)getFullPathOfYearHBImageWithFileId:(id)arg1 userName:(id)arg2;
+ (id)imageWithColor:(id)arg1;
+ (unsigned int)convertTenpayCmdIdToNewCGI:(unsigned int)arg1 payScene:(unsigned int)arg2;
+ (id)convertCGIEnumToString:(unsigned int)arg1;
+ (void)logOfflinePayGetToken:(int)arg1;
+ (void)logUserAction:(int)arg1;
+ (_Bool)validateUrl:(id)arg1;
+ (void)logLoanMoneyAction:(int)arg1;
+ (void)logTransferAction:(int)arg1;
+ (id)feeSymbolFromType:(id)arg1;
+ (id)feeTextFromType:(id)arg1 fee:(long long)arg2;
+ (_Bool)isEmptyKey:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)isDomesticOrderWithMulitOrderDetail:(id)arg1;
+ (_Bool)isDomesticUserWithCardUserFlag:(unsigned int)arg1;
+ (_Bool)isOverseasUserWithCardUserFlag:(unsigned int)arg1;
+ (_Bool)isDomesticCardWithCardBankTag:(unsigned int)arg1;
+ (_Bool)isOverseasCardWithCardBankTag:(unsigned int)arg1;
+ (unsigned int)differntCharactorCountCompareString:(id)arg1 WithOriginalString:(id)arg2;
+ (id)getAddressBookTelphoneNumberDictionary;
+ (id)validWCMallPhoneNumber:(id)arg1;
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
+ (id)stringWithFormEncodedComponentsAscending:(id)arg1 ascending:(_Bool)arg2 skipempty:(_Bool)arg3 separator:(id)arg4;
+ (id)getWCBizLoginTitle:(id)arg1 MaxWidth:(double)arg2;
+ (id)getWCBizAuthTitle:(id)arg1 MaxWidth:(double)arg2;
+ (id)getTitleViewWithTitle:(id)arg1 SubTitle:(id)arg2 LandscapeMode:(_Bool)arg3 MaxWidth:(double)arg4;
+ (id)getTitleViewWithTitle:(id)arg1 LandscapeMode:(_Bool)arg2 MaxWidth:(double)arg3;
+ (id)getWCBizLoginTitle:(id)arg1 LandscapeMode:(_Bool)arg2 MaxWidth:(double)arg3;
+ (id)getWCBizAuthTitle:(id)arg1 LandscapeMode:(_Bool)arg2 MaxWidth:(double)arg3;
+ (id)getSaveStyleBarItemTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
+ (id)getWCFacingReceiveSettingDataPath;
+ (id)getWCPayCgiResponseCachePathWith:(id)arg1;
+ (id)getWCPayDigitalCrtPath;
+ (id)getWCPayRealnameWordingPath;
+ (id)getWCPayBankResourcePath;
+ (id)getWCPayPayManagePath;
+ (id)getWCRedEnvelopesLastRadomHBSelctedCountPath;
+ (id)getWCRedEnvelopesUserInfoPath;
+ (id)getWCMallFunctionListPath;
+ (id)getWCPayServerDynamicWordingPath;
+ (id)getFiltedTruthName:(id)arg1;
+ (id)getCreditCardHadViewFilePath;
+ (id)getWCAddressStageDataFilePath;
+ (id)getWCMallShowedInActivityCellProductId;
+ (id)getWCMallShowedBannerId;
+ (id)getWCMallShowedProductId;
+ (id)getWCMallShowedRedCodePath;
+ (id)getWCMallShowedNewPath;
+ (id)getWCMallTicketsListPath;
+ (id)getWCMallLatestActivityTipsPath;
+ (id)getWCMallTelephoneDictionaryPath;
+ (id)getWCMallTelephoneListPath;
+ (id)getWCAddressYiXunFilePath;
+ (id)getWCAddressFilePath;
+ (id)getWCPayLoanEntryInfoPath;
+ (id)getWCPayTransferedUserListPath;
+ (id)getWCPayNoticeInfoPath;
+ (id)getWCPayBalancePath;
+ (id)getWCPaySwitchInfoPath;
+ (id)getWCPayUserInfoPath;
+ (id)getWCPayCreditCardShowedNewInfoPath;
+ (id)getWCPayOfflinePayShowedNewInfoPath;
+ (id)getWCPayOfflinePayQueryUsrerInfoPath;
+ (id)getWCPayOfflinePayQueryInfoPath;
+ (id)getWCPayOfflinePayUserUinPath;
+ (id)getWCPayOfflinePayFreezeInfoPath;
+ (id)getWCPayOfflinePayDeviceIDPath;
+ (id)getWCPayOfflinePayCrtPath;
+ (id)getWCPayAvalibleCardBinInfoPath;
+ (id)getWCPayAllScenePayCardListPath;
+ (id)getWCPayPayCardListPath;
+ (id)getWCPaySettingPath;
+ (id)getWCBizImgCachedPath:(id)arg1;
+ (_Bool)isBindCardInfoFull:(id)arg1;
+ (id)getHeaderTipView:(id)arg1;
+ (id)getHeaderErrorTipView:(id)arg1;
+ (double)getFooterTipViewHeight:(id)arg1;
+ (id)getFooterTipView:(id)arg1;
+ (id)getFooterErrorTipView:(id)arg1;
+ (id)getStringFromBindCardInfo:(id)arg1;
+ (id)getCardTypeName:(id)arg1;
+ (_Bool)IsWCGroupPayAppServiceInPlane:(id)arg1;
+ (_Bool)IsWCRedEnvelopesAppServiceInPlane:(id)arg1;
+ (_Bool)IsWCPayTransferAppServiceInPlane:(id)arg1;
+ (unsigned char)GetWCPayVersion;

@end

