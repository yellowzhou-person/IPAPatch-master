//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MMLoadingView, UIScrollView;

@interface MMSMBaseViewController : UIViewController
{
    MMLoadingView *m_loadingViewX;
    UIScrollView *m_contentView;
    unsigned long long m_scene;
}

@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=m_scene;
- (void).cxx_destruct;
- (void)onBackBtnDone:(id)arg1;
- (double)getContentViewY;
- (void)stopLoading;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)startLoadingBlocked;
- (void)viewDidLoad;
- (id)init;

@end
