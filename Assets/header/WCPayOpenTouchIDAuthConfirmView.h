//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIView;

@interface WCPayOpenTouchIDAuthConfirmView : MMUIView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _okBlock;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (float)heightOfBtn;
- (float)topOfBtn;
- (float)topOfSubtitle;
- (float)topOfTitle;
- (float)topOfImg;
- (float)fontSizeOfBtn;
- (float)fontSizeOfSubtitle;
- (float)fontSizeOfTitle;
- (float)widthOfContent;
- (void)show;
- (void)onCancelBtnClick:(id)arg1;
- (void)onOKBtnClick:(id)arg1;
- (id)getHighlightImg:(struct CGRect)arg1;
- (void)setupOpenTouchIDGuiderView;
- (void)setupOpenTouchIDSuccessView;
- (id)initWithType:(int)arg1;
- (void)dealloc;

@end

