//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WXTalkDNSController : NSObject
{
    unsigned int _netType;
    unsigned int relayPort;
    NSString *relayIP;
    NSArray *relayIPList;
}

@property(retain, nonatomic) NSArray *relayIPList; // @synthesize relayIPList;
@property(nonatomic) unsigned int relayPort; // @synthesize relayPort;
@property(retain, nonatomic) NSString *relayIP; // @synthesize relayIP;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
