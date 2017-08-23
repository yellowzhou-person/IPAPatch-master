//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSessionInfo.h"

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface WASessionInfo : MMBaseSessionInfo <WCDBCoding>
{
}

+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
- (void)clearOutUnreadCount;
- (void)updateOutUnreadCount;
- (void)updateSessionInfo;
- (id)genContact;
- (void)setContact:(id)arg1;

// Remaining properties
@property(nonatomic) long long __rowID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
