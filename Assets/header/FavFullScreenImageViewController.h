//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavImageFullScreenViewContainerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class ForwardMessageLogicController, MMScrollView, NSMutableArray, NSString, SimpleImgInfo, UIPageControl, UIView;

@interface FavFullScreenImageViewController : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, FavImageFullScreenViewContainerDelegate, WCCommitViewResultDelegate, WCActionSheetDelegate>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSMutableArray *m_arrFavData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    unsigned int m_firstIndex;
    _Bool m_isRotating;
    long long m_lastDeviceOrientation;
    _Bool m_isAnimationShowing;
    SimpleImgInfo *m_forwardDataSrc;
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _m_canSelect;
}

@property(nonatomic) _Bool m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)captureScreen;
- (void)onForward2WCRecordData;
- (void)onForward2MsgRecordData;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPressEvent:(id)arg1 onImage:(id)arg2;
- (void)animationHideWithRotate;
- (_Bool)useAlphaAnimation;
- (_Bool)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideStop;
- (void)onContainerAnimationHideStop;
- (id)getVisibleViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)downloadImage;
- (void)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (void)resetScrollView;
- (void)clearStatus;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)adjustViewAndNavBarRect;
- (void)onMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

