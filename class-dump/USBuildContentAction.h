//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "USConditionalAction.h"

@protocol USContentUnit;

@interface USBuildContentAction : USConditionalAction
{
    id <USContentUnit> _contentUnit;
}

+ (id)type;
@property(readonly, nonatomic) id <USContentUnit> contentUnit; // @synthesize contentUnit=_contentUnit;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

