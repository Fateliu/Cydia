//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (AutoLayout)
+ (id)NSDictionaryOfMetricsFromRULE:(id)arg1;
- (void)spaceVerticalViews:(id)arg1 margins:(id)arg2;
- (void)spaceHorizontalViews:(id)arg1 margins:(id)arg2;
- (void)bottomBesidesView:(id)arg1 greaterThanInset:(double)arg2;
- (void)topBesidesView:(id)arg1 greaterThanInset:(double)arg2;
- (void)leftBesidesView:(id)arg1 greaterThanInset:(double)arg2;
- (void)rightBesidesView:(id)arg1 greaterThanInset:(double)arg2;
- (void)bottomBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)topBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)leftBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)rightBesidesView:(id)arg1 lessThanInset:(double)arg2;
- (void)bottomBesidesView:(id)arg1 inset:(double)arg2;
- (void)topBesidesView:(id)arg1 inset:(double)arg2;
- (void)leftBesidesView:(id)arg1 inset:(double)arg2;
- (void)rightBesidesView:(id)arg1 inset:(double)arg2;
- (void)constrainToMinHeight:(double)arg1;
- (void)constrainToMinWidth:(double)arg1;
- (void)constrainToMaxHeight:(double)arg1;
- (void)constrainToMaxWidth:(double)arg1;
- (void)constrainToHeight:(double)arg1;
- (void)constrainToWidth:(double)arg1;
- (void)coverView:(id)arg1 withEdgeInset:(struct UIEdgeInsets)arg2;
- (void)centerInVertical;
- (void)centerInHorizontal;
- (void)bottomAlignWithSuperViewForinset:(double)arg1;
- (void)rightAlignWithSuperViewForinset:(double)arg1;
- (void)leftAlignWithSuperViewForinset:(double)arg1;
- (void)topAlignWithSuperViewForinset:(double)arg1;
- (void)centerYAlignWithView:(id)arg1 inset:(double)arg2;
- (void)centerXAlignWithView:(id)arg1 inset:(double)arg2;
- (void)bottomAlignWithView:(id)arg1 inset:(double)arg2;
- (void)rightAlignWithView:(id)arg1 inset:(double)arg2;
- (void)leftAlignWithView:(id)arg1 inset:(double)arg2;
- (void)topAlignWithView:(id)arg1 inset:(double)arg2;
- (void)makeNoLarger;
- (void)makeNoSmaller;
- (void)makeFlexiableLarger;
- (void)makeFlexiableSmaller;
- (void)removeAllConstraints;
- (id)commonSuperviewWithView:(id)arg1;
- (void)makeAutoLayout;
@end

