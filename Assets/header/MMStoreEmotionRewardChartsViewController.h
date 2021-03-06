//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmotionCollectionFooterViewDelegate-Protocol.h"
#import "StoreEmotionGetDonorListCgiDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class EmoticonStoreItem, EmotionCollectionFooterView, EmotionRewardResponseInfo, EmotionStoreRewardDonorHeader, NSArray, NSString, StoreEmotionGetDonorListCgi, UICollectionView, UIImage;

@interface MMStoreEmotionRewardChartsViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, StoreEmotionGetDonorListCgiDelegate, EmotionCollectionFooterViewDelegate>
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    NSArray *m_donors;
    StoreEmotionGetDonorListCgi *m_getDonorListCgi;
    UICollectionView *m_collectionView;
    EmotionStoreRewardDonorHeader *m_collectionHeaderView;
    EmotionCollectionFooterView *m_collectionFooterView;
    UIImage *m_defaultHeadImage;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onGetDonorsListFailedWithPid:(id)arg1;
- (void)onGetDonorsListSuccessedWithPid:(id)arg1 Donors:(id)arg2 DonorNum:(unsigned int)arg3 hasMore:(_Bool)arg4;
- (void)onClose;
- (void)initView;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

