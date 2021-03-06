//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WACacheFileCleanStatusAppItem : NSObject <PBCoding>
{
    unsigned int totalFileNum;
    unsigned int contentModifyTime;
    unsigned int lastScanTime;
    unsigned long long totalFileSize;
}

+ (void)initialize;
@property(nonatomic) unsigned int lastScanTime; // @synthesize lastScanTime;
@property(nonatomic) unsigned int contentModifyTime; // @synthesize contentModifyTime;
@property(nonatomic) unsigned int totalFileNum; // @synthesize totalFileNum;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize;
- (long long)compareByContentModifyTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

