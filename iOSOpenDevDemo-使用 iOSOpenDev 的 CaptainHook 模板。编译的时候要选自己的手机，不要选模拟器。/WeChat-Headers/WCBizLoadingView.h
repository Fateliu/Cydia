//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface WCBizLoadingView : UIView
{
    UIImageView *m_imageView;
    UILabel *m_labelTitle;
    UILabel *m_labelMsg;
    UIImageView *backgroundView;
    UIImageView *m_logoView;
    _Bool m_bIgnoringInteractionEventsWhenLoading;
}

@property(nonatomic) _Bool m_bIgnoringInteractionEventsWhenLoading; // @synthesize m_bIgnoringInteractionEventsWhenLoading;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setMessage:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)autoLayoutInCenter;
- (id)init;

@end

