//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRConnectionHandler.h"

@class CRCrashArchive, NSString;

@interface CRCrashConnectionHandler : CRConnectionHandler
{
    NSString *_path;
    CRCrashArchive *_crashArchive;
}

@property(retain) CRCrashArchive *crashArchive; // @synthesize crashArchive=_crashArchive;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)handleResponse:(long long)arg1 andData:(id)arg2;
- (id)initWithCritterDelegate:(id)arg1 andCrashArchive:(id)arg2 andReportPath:(id)arg3;

@end
