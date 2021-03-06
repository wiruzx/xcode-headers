//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SimProfilesPathMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSMutableArray *_leafMonitorSources;
    NSMutableDictionary *_monitoredPathsDict;
    SimServiceContext *_serviceContext;
}

+ (id)profilesPathMonitorForContext:(id)arg1;
@property __weak SimServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(retain) NSMutableDictionary *monitoredPathsDict; // @synthesize monitoredPathsDict=_monitoredPathsDict;
@property(retain) NSMutableArray *leafMonitorSources; // @synthesize leafMonitorSources=_leafMonitorSources;
@property(retain) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
- (void).cxx_destruct;
- (void)_monitorProfilesSubDirectory:(int)arg1 path:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)_monitorProfilesDirectory:(int)arg1 path:(id)arg2 forSubDirectory:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)_monitorProfilesDirectory:(int)arg1 path:(id)arg2;
- (void)_monitorProfilesParentDirectory:(int)arg1 nextPathComponent:(id)arg2 path:(id)arg3;
- (void)_monitorProfilesPath:(id)arg1;
- (void)fence;
@property(readonly, copy) NSArray *monitoredPaths;
- (void)monitorProfilesPath:(id)arg1;
- (void)monitorDefaultProfilePaths;
- (id)initWithContext:(id)arg1;
- (id)init;

@end