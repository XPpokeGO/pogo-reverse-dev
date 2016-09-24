//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSURL;

@interface USContentUnit : NSObject
{
    _Bool _fullScreen;
    NSURL *_templateURL;
    NSDictionary *_context;
    NSNumber *_contentID;
    struct CGRect _portraitFrame;
    struct CGRect _landscapeFrame;
}

@property(readonly, nonatomic) struct CGRect landscapeFrame; // @synthesize landscapeFrame=_landscapeFrame;
@property(readonly, nonatomic) struct CGRect portraitFrame; // @synthesize portraitFrame=_portraitFrame;
@property(readonly, nonatomic) NSNumber *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSURL *templateURL; // @synthesize templateURL=_templateURL;
- (void).cxx_destruct;
- (struct CGRect)frameForContainerSize:(struct CGSize)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
