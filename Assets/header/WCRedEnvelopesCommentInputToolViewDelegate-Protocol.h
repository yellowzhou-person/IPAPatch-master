//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, WCRedEnvelopesCommentInputToolView;

@protocol WCRedEnvelopesCommentInputToolViewDelegate <NSObject>

@optional
- (void)updateToolViewAnimationCurve:(long long)arg1;
- (void)updateToolViewAnimationDuration:(double)arg1;
- (void)beforeLandscapeToolViewHeightUpdate:(WCRedEnvelopesCommentInputToolView *)arg1;
- (void)afterLandscapeToolViewHeightUpdate:(WCRedEnvelopesCommentInputToolView *)arg1;
- (void)pasteImage:(UIImage *)arg1;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)OnToolViewDissmiss;
- (void)SendTextMessageToolView:(NSString *)arg1;
@end

