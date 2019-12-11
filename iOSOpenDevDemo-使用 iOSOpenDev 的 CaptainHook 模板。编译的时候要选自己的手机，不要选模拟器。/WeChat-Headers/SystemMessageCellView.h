//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, SystemMessageViewModel, UIImageView;

@interface SystemMessageCellView : BaseMessageCellView <ILinkEventExt>
{
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
}

- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLongTouch;
- (void)layoutContentView;
- (void)updateStatus;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SystemMessageViewModel *viewModel; // @dynamic viewModel;

@end

