//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface NewSyncPluginMgr : MMService <MMService, PBMessageObserverDelegate, MessageObserverDelegate>
{
    NSMutableDictionary *m_dicSelectorList;
    NSRecursiveLock *m_oMgrLock;
}

@property(retain, nonatomic) NSMutableDictionary *m_dicSelectorList; // @synthesize m_dicSelectorList;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)CheckSelector:(unsigned int)arg1 Request:(id)arg2;
- (void)MergeKeyBufferByType:(unsigned int)arg1 Buffer:(id)arg2;
- (id)GetKeyBufferByType:(unsigned int)arg1;
- (_Bool)IsMd5Different:(unsigned int)arg1 Md5:(id)arg2;
- (void)SetSyncKeyMd5BySelector:(unsigned int)arg1 Md5:(id)arg2;
- (id)GetSyncWrapBySelector:(unsigned int)arg1;
- (unsigned int)GetCgiBySelector:(unsigned int)arg1;
- (unsigned int)GetSelectorByCgi:(unsigned int)arg1;
- (void)SetContinueFlag:(_Bool)arg1 Selector:(unsigned int)arg2;
- (void)SetSyncIngFlag:(_Bool)arg1 Selector:(unsigned int)arg2;
- (_Bool)IsSelectorContinue:(unsigned int)arg1;
- (_Bool)IsSelectorSyncIng:(unsigned int)arg1;
- (void)ResetNewSyncWrap:(unsigned int)arg1;
- (void)InitSelectorList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
