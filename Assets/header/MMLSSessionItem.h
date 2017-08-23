//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface MMLSSessionItem : NSObject <NSCoding>
{
    unsigned int _msgCount;
    NSString *session;
    NSString *userName;
    unsigned long long fileSize;
    NSMutableArray *_sessionItemArray;
}

+ (_Bool)sessionItemCompareItem:(id)arg1 withItem:(id)arg2;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(retain, nonatomic) NSMutableArray *sessionItemArray; // @synthesize sessionItemArray=_sessionItemArray;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *session; // @synthesize session;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
