//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface WCPayBankLogoView : UIImageView
{
    NSString *m_bankType;
}

@property(retain, nonatomic) NSString *m_bankType; // @synthesize m_bankType;
- (void).cxx_destruct;
- (void)UpdateImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 WithBankType:(id)arg2;
- (void)initViewWithBankType:(id)arg1 Frame:(struct CGRect)arg2;

@end

