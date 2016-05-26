//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTProvisioningProfileManager : NSObject <DVTProvisioningProfileSource>
{
    id _provider;
    NSArray *_provisioningProfileSearchPaths;
}

+ (id)keyPathsForValuesAffectingExpiringProfiles;
+ (id)keyPathsForValuesAffectingAllProfiles;
+ (id)keyPathsForValuesAffectingAreProfilesLoaded;
+ (id)managerWithProvisioningProfileSearchPaths:(id)arg1;
+ (id)defaultManager;
@property(readonly) NSArray *provisioningProfileSearchPaths; // @synthesize provisioningProfileSearchPaths=_provisioningProfileSearchPaths;
- (void).cxx_destruct;
- (void)installHostProfiles:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)profileWithData:(id)arg1 error:(id *)arg2;
- (id)profileWithURL:(id)arg1 error:(id *)arg2;
@property(readonly) id provider; // @synthesize provider=_provider;
- (id)profilesMatchingApplicationID:(id)arg1;
- (id)profileMatchingUUID:(id)arg1;
- (id)profilesMatchingPredicate:(id)arg1;
@property(readonly) NSSet *allUsableProfiles;
- (BOOL)isProfileExpiringWithCodeSigningIdentity:(id)arg1 profileName:(id *)arg2;
- (id)expiringProfilesInExpansionContext:(id)arg1;
@property(readonly) NSSet *expiringProfiles;
@property(readonly) NSSet *allProfiles;
@property(readonly) BOOL areProfilesLoaded;
- (id)allProfiles_sync;
- (void)forceProfileLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end