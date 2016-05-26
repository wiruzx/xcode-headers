//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTAnalyticsCrashPointList : DVTAnalyticsData <DVTServicesJSONSerialization>
{
    DVTAnalyticsAppIdentifier *_appIdentifier;
    NSArray *_topCrashes;
    NSString *_crashesSortedBy;
    NSString *_adamId;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_bundleId;
    NSNumber *_numCrashes;
}

+ (id)crashPointListForSession:(id)arg1 appIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
@property(retain) NSNumber *numCrashes; // @synthesize numCrashes=_numCrashes;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *adamId; // @synthesize adamId=_adamId;
@property(readonly) NSString *crashesSortedBy; // @synthesize crashesSortedBy=_crashesSortedBy;
@property(readonly) NSArray *topCrashes; // @synthesize topCrashes=_topCrashes;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly) DVTAnalyticsAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end