//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol EditImageInitialViewDelegate <NSObject>
- (void)getOriginalImage:(void (^)(UIImage *, NSData *))arg1;
- (void)getDisplayImage:(void (^)(UIImage *, NSMutableArray *, _Bool))arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
@end

