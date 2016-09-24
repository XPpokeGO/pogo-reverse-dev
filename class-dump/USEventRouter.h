//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "USDeliveryQueueDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol USEventRouterDelegate;

@interface USEventRouter : NSObject <USDeliveryQueueDelegate>
{
    id <USEventRouterDelegate> _delegate;
    NSDictionary *_queueNameToQueues;
    NSDictionary *_eventTypeToRoutes;
    NSMutableSet *_packetRegistry;
    NSOperationQueue *_operationQueue;
    NSArray *_sortedFilters;
}

+ (id)routerWithDispatcherConfiguration:(id)arg1 attributeBuilder:(id)arg2 operationQueue:(id)arg3 dataSender:(id)arg4;
@property(retain, nonatomic) NSArray *sortedFilters; // @synthesize sortedFilters=_sortedFilters;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableSet *packetRegistry; // @synthesize packetRegistry=_packetRegistry;
@property(retain, nonatomic) NSDictionary *eventTypeToRoutes; // @synthesize eventTypeToRoutes=_eventTypeToRoutes;
@property(retain, nonatomic) NSDictionary *queueNameToQueues; // @synthesize queueNameToQueues=_queueNameToQueues;
@property(nonatomic) __weak id <USEventRouterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deliveryQueue:(id)arg1 didFailPacketsDelivery:(id)arg2 error:(id)arg3;
- (void)deliveryQueue:(id)arg1 didDeliverPackets:(id)arg2 response:(id)arg3;
- (void)drain;
- (id)itemsFromPackets:(id)arg1;
- (void)unregisterPackets:(id)arg1;
- (void)registerPacket:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)canRouteItem:(id)arg1;
- (void)routeItem:(id)arg1;
- (id)routeWithBestMatchForEvent:(id)arg1;
- (id)initWithDispatcherConfiguration:(id)arg1 attributeBuilder:(id)arg2 operationQueue:(id)arg3 dataSender:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

