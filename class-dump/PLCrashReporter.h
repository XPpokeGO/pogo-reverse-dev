//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PLCrashMachExceptionPortSet, PLCrashMachExceptionServer, PLCrashReporterConfig;

@interface PLCrashReporter : NSObject
{
    PLCrashReporterConfig *_config;
    _Bool _enabled;
    PLCrashMachExceptionServer *_machServer;
    PLCrashMachExceptionPortSet *_previousMachPorts;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_applicationMarketingVersion;
    NSString *_crashReportDirectory;
}

+ (id)sharedReporter;
+ (void)initialize;
- (void)setCrashCallbacks:(struct PLCrashReporterCallbacks *)arg1;
- (id)generateLiveReportAndReturnError:(id *)arg1;
- (id)generateLiveReport;
- (id)generateLiveReportWithThread:(unsigned int)arg1 error:(id *)arg2;
- (id)generateLiveReportWithThread:(unsigned int)arg1;
- (_Bool)enableCrashReporterAndReturnError:(id *)arg1;
- (_Bool)enableCrashReporter;
- (_Bool)purgePendingCrashReportAndReturnError:(id *)arg1;
- (_Bool)purgePendingCrashReport;
- (id)loadPendingCrashReportDataAndReturnError:(id *)arg1;
- (id)loadPendingCrashReportData;
- (_Bool)hasPendingCrashReport;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end
