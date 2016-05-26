//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTToolchainRegistry : NSObject
{
    DVTSearchPath *_searchPath;
    NSSet *_appleApprovedPaths;
    DVTDispatchLock *_lock;
    NSSet *_toolchains;
    NSMutableDictionary *_identsToToolchains;
    NSMutableDictionary *_aliasesToToolchains;
    DVTToolchain *_defaultToolchainOverride;
    DVTToolchain *_intendedDefaultToolchainOverride;
    DVTDelayedInvocation *_scanSearchPathsInvocation;
}

+ (id)keyPathsForValuesAffectingAvailableOverrideToolchains;
+ (id)keyPathsForValuesAffectingAvailableBuildSystemToolchains;
+ (id)defaultRegistry;
- (void).cxx_destruct;
@property(readonly) NSSet *availableOverrideToolchains;
@property(readonly) NSSet *availableBuildSystemToolchains;
- (id)toolchainsForToolchainsBuildSettingValue:(id)arg1;
@property(retain) DVTToolchain *intendedDefaultToolchainOverride;
@property(readonly) DVTToolchain *activeDefaultToolchain;
@property(readonly) DVTToolchain *defaultToolchainOverride;
- (id)_toolchainForPath:(id)arg1;
- (void)scanSearchPaths;
- (BOOL)scanSearchPathAndRegisterToolchains:(id *)arg1;
@property(readonly) DVTToolchain *defaultToolchain;
- (id)toolchainForIdentifierOrPath:(id)arg1;
- (id)_toolchainForIdentifierOrPath:(id)arg1;
- (id)_toolchainForIdentifier:(id)arg1;
- (id)toolchainForIdentifier:(id)arg1;
- (id)toolchainForIdentifier:(id)arg1 includingOverrides:(BOOL)arg2;
- (id)allRegisteredToolchains;
- (BOOL)registerToolchain:(id)arg1 error:(id *)arg2;
@property(readonly) NSSet *toolchains;
- (void)dealloc;
- (id)init;
- (id)initWithSearchPath:(id)arg1 appleApprovedPaths:(id)arg2;
- (id)initWithSearchPath:(id)arg1;
- (id)initWithPrimarySearchPath:(id)arg1 overridesSearchPath:(id)arg2;

@end