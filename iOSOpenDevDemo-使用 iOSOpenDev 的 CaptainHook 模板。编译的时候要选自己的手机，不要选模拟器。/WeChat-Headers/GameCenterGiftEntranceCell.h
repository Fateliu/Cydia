//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterGiftEntrance, MMWebImageView, UILabel;

@interface GameCenterGiftEntranceCell : MMTableViewCell
{
    GameCenterGiftEntrance *_giftEntrance;
    MMWebImageView *leftImageView;
    UILabel *leftLaebl;
    MMWebImageView *middleImageView;
    UILabel *middleLaebl;
    MMWebImageView *rightImageView;
    UILabel *rightLaebl;
}

- (void).cxx_destruct;
- (void)initializeSubview;
- (void)layoutSubviews;
- (void)adjustSubviewsLocation;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 giftEntrance:(id)arg3;

@end

