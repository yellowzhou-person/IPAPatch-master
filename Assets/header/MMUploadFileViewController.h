//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILogReportExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"

@class MMLoadingView, MMProgressView, NSArray, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, WebMailViewController;

@interface MMUploadFileViewController : MMUIViewController <MMResourceMgrExt, ILogReportExt, MMPackageDownloadMgrExt>
{
    WebMailViewController *m_mailViewCtrl;
    NSArray *_uploadFileNames;
    NSString *_attachDataName;
    MMProgressView *m_progressView;
    UILabel *m_labelProgress;
    UIImageView *m_recoverView;
    UILabel *m_noneFile;
    UILabel *m_tips;
    UILabel *m_uploadFileName;
    UIButton *m_uploadBtn;
    UILabel *m_warningLabel;
    UITapGestureRecognizer *_tap;
    MMLoadingView *_loadingView;
}

@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)UploadSuccess;
- (void)UploadFail;
- (void)OnResponse:(id)arg1;
- (void)onFinish;
- (void)setUploadSuc;
- (void)setUploadFail;
- (void)setProgress:(id)arg1;
- (void)dealloc;
- (void)hiddenUpView;
- (void)sendMail:(id)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)downloadPackage:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)didTap;
- (void)testData;
- (void)adjustTableViewRect;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
