//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WCStatTimerHelper : MMObject
{
    _Bool _bHadAddObserver;
    unsigned long long _u64ActiveTime;
    unsigned long long _u64TotalTime;
}

- (unsigned long long)endAndReturnTimeInMs;
- (void)start;
- (void)calculateTotalTime;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)resetTotalTime;
- (void)clearActiveTime;
- (void)resetActiveTime;
- (void)removeObserver;
- (void)tryAddObserver;
- (void)dealloc;
- (id)init;

@end

