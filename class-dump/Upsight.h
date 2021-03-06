//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol USAnalyticsInterface, USBillboardManager, UpsightDataStoreInterface;

@interface Upsight : NSObject
{
    id <USAnalyticsInterface> _analytics;
    id <USBillboardManager> _billboardManager;
    id <UpsightDataStoreInterface> _dataStore;
    NSString *_token;
}

+ (id)variableObserver;
+ (void)setDefaultLogLevel:(long long)arg1;
+ (long long)defaultLogLevel;
+ (_Bool)optOutStatus;
+ (void)setOptOutStatus:(_Bool)arg1;
+ (void)setLocation:(id)arg1;
+ (id)billboardForScope:(id)arg1;
+ (void)recordAttributionEventForCampaign:(id)arg1 creative:(id)arg2 source:(id)arg3 properties:(id)arg4;
+ (void)recordAttributionEventForCampaign:(id)arg1 creative:(id)arg2 source:(id)arg3;
+ (void)recordMilestoneEventForScope:(id)arg1 properties:(id)arg2;
+ (void)recordMilestoneEventForScope:(id)arg1;
+ (void)recordInAppPurchaseEventWithResolution:(unsigned long long)arg1 product:(id)arg2 quantity:(unsigned long long)arg3 price:(float)arg4 currency:(id)arg5 transactionIdentifier:(id)arg6 properties:(id)arg7;
+ (void)recordMonetizationEventWithResolution:(unsigned long long)arg1 currency:(id)arg2 quantity:(unsigned long long)arg3 product:(id)arg4 price:(float)arg5 properties:(id)arg6;
+ (void)recordMonetizationEventWithResolution:(unsigned long long)arg1 totalPrice:(float)arg2 currency:(id)arg3 product:(id)arg4 properties:(id)arg5;
+ (void)recordAnalyticsEventWithName:(id)arg1 properties:(id)arg2;
+ (id)publicKey;
+ (id)token;
+ (_Bool)isTokenFormatValid:(id)arg1;
+ (_Bool)getSDKEnabled;
+ (void)setSDKEnabled:(_Bool)arg1;
+ (void)startSDK;
+ (id)sharedUpsight;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) id <USBillboardManager> billboardManager; // @synthesize billboardManager=_billboardManager;
@property(retain, nonatomic) id <USAnalyticsInterface> analytics; // @synthesize analytics=_analytics;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)arg1;
- (id)init;

@end

