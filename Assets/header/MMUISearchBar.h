//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@interface MMUISearchBar : UISearchBar
{
    _Bool m_bForceAdjustFrame;
}

@property(nonatomic) _Bool m_bForceAdjustFrame; // @synthesize m_bForceAdjustFrame;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)findCancelButton;
- (id)getNavigationButton:(id)arg1;
- (void)fixOrientationBug;
- (void)fixSearchIconSize;
- (id)findUISearchBarImage:(id)arg1;
- (id)findUISearchBarBackground:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end
