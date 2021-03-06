//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ILinkEventExt-Protocol.h"
#import "ITranslateMsgMgrExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "TextFloatPreviewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTipsViewController, NSString, RichTextView, TextFloatPreview, TextMessageViewModel, UIButton, UIImageView, WCUIActionSheet;

@interface TextMessageCellView : CommonMessageCellView <ILinkEventExt, RichTextLayoutDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, TextFloatPreviewDelegate, ITranslateMsgMgrExt>
{
    RichTextView *m_richTextView;
    UIButton *m_oTranslateStatusButton;
    UIImageView *m_oTranslateLineView;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *m_uiActionSheet;
    TextFloatPreview *m_floatPreview;
}

- (void).cxx_destruct;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkHighlighted:(_Bool)arg1 url:(id)arg2;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onWindowHide;
- (void)onHide;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchDownRepeat;
- (void)translateMsg;
- (void)onTranslateMsg:(id)arg1;
- (void)onCopy:(id)arg1;
- (_Bool)canShowTranslateMenuItem;
- (id)operationMenuItems;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopyLinkText:(id)arg1;
- (_Bool)onlyContainsLink;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)initTranslateStatusButton;
- (void)initTranslateLineView;
- (void)initRichTextView;
- (void)setNeedsDisplay;
- (double)contentViewCenterY;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TextMessageViewModel *viewModel; // @dynamic viewModel;

@end

