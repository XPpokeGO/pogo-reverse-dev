//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol UpsightDataStoreInterface;

@interface USPartnerManager : NSObject
{
    NSDictionary *_partnerNameToPartnerMap;
    NSDictionary *_currentConfiguration;
    id <UpsightDataStoreInterface> _dataStore;
}

+ (id)sharedPartnerManager;
@property(retain, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) NSDictionary *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
@property(retain, nonatomic) NSDictionary *partnerNameToPartnerMap; // @synthesize partnerNameToPartnerMap=_partnerNameToPartnerMap;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1;
- (void)partnerManagerConfigurationDidUpdate:(id)arg1 action:(unsigned long long)arg2;
- (void)checkForConfiguration;
- (id)getPartnerMediatorWithName:(id)arg1;
- (id)partnerWithName:(id)arg1;
- (id)defaultConfiguration;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1;
- (id)init;

@end

