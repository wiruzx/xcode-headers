//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCAppleScriptBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    BOOL _isSharedContext;
    NSString *_contextName;
}

+ (id)defaultName;
- (id)contextName;
- (BOOL)isSharedContext;
- (void)dealloc;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (void)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;

@end