//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

@class NSString, UIButton, UIImageView, UILabel;
@protocol VolumeTipViewDelegate;

@interface VolumeTipView : MMUIWindow
{
    NSString *m_nsTipIcon;
    NSString *m_nsTitle;
    NSString *m_nsDesc;
    UIButton *m_bigBtn;
    UIImageView *m_bkgView;
    UIImageView *m_tipIconView;
    UILabel *m_labelTitle;
    UILabel *m_labelDesc;
    _Bool m_bNeedHide;
    unsigned int m_uiFadeDelay;
    id <VolumeTipViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <VolumeTipViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)fadeAfterDelay:(double)arg1 FadeDuration:(double)arg2;
- (void)show;
- (id)initWithTipIcon:(id)arg1 Title:(id)arg2 Desc:(id)arg3;
- (void)fadeEnd;
- (void)fadeWithDuration:(id)arg1;
- (void)onHide;
- (void)initView;

@end
