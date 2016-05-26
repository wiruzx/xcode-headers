//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCrashLog : NSObject <DVTAnalyticsSnapshotFileSystemSerialization>
{
    NSDictionary *_sections;
    DVTMutableOrderedDictionary *_loadedBinariesByName;
    NSNumber *_isSymbolicated;
    NSNumber *_isFullySymbolicated;
    DVTCrashLogThread *_crashingThread;
    NSString *_identifier;
    NSData *_rawData;
    NSArray *_threads;
    NSDictionary *_executableInfo;
    DVTCrashLogBacktrace *_lastExceptionBacktrace;
    NSDate *_dateTime;
    NSString *_pid;
    NSString *_build;
    NSString *_version;
    NSString *_osVersion;
    NSString *_osBuild;
    DVTFilePath *_cachePath;
}

+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
+ (id)escapedDateTimeForDateTimeSectionContents:(id)arg1;
+ (id)crashLogFromFile:(id)arg1 error:(id *)arg2;
+ (id)crashLogFromText:(id)arg1 cachePath:(id)arg2 error:(id *)arg3;
@property(retain) DVTFilePath *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(readonly) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *build; // @synthesize build=_build;
@property(readonly) NSString *pid; // @synthesize pid=_pid;
@property(readonly) NSDate *dateTime; // @synthesize dateTime=_dateTime;
@property(readonly) DVTCrashLogBacktrace *lastExceptionBacktrace; // @synthesize lastExceptionBacktrace=_lastExceptionBacktrace;
@property(readonly) NSDictionary *executableInfo; // @synthesize executableInfo=_executableInfo;
@property(readonly) NSArray *threads; // @synthesize threads=_threads;
@property(readonly) NSData *rawData; // @synthesize rawData=_rawData;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)symbolicateWithSymbolicator:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)deletionSnapshotWithError:(id *)arg1;
- (id)snapshotWithError:(id *)arg1;
@property(readonly, getter=isFullySymbolicated) BOOL fullySymbolicated;
@property(readonly, getter=isSymbolicated) BOOL symbolicated;
- (void)_checkSymbolicationStatus;
@property(readonly) DVTCrashLogThread *crashingThread; // @synthesize crashingThread=_crashingThread;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_parseExecutableInfoWithError:(id *)arg1;
- (id)loadedBinaryNamed:(id)arg1;
@property(readonly) NSArray *loadedBinaries;
- (id)_parseOSVersionAndBuildNumber:(id)arg1 withError:(id *)arg2;
- (id)_parseVersionAndBuildString:(id)arg1 withError:(id *)arg2;
- (id)_parseProcessString:(id)arg1 withError:(id *)arg2;
@property(readonly) NSString *appName;
- (BOOL)_parseLastExceptionBacktraceWithError:(id *)arg1;
- (BOOL)_parseThreadsWithError:(id *)arg1;
- (BOOL)_parseLoadedBinariesWithError:(id *)arg1;
- (BOOL)_parseRawDataWithError:(id *)arg1;
- (id)description;
- (void)_calculateIdentifier;
- (id)initWithData:(id)arg1 cachePath:(id)arg2 error:(id *)arg3;
- (id)init;

@end