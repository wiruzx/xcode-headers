//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProvisioningDeveloperPortalDatabaseFacade : NSObject
{
}

+ (id)_operationQueue;
+ (id)_portalPlatforms;
+ (id)nameOfTeamWithTeamID:(id)arg1;
+ (BOOL)downloadEnhancedProvisioningProfiles:(id)arg1 token:(struct DVTPortalOperationToken *)arg2 error:(id *)arg3;
+ (BOOL)downloadAndRefreshAllWithToken:(struct DVTPortalOperationToken *)arg1 error:(id *)arg2;
+ (struct DVTPortalOperationToken *)singleTeamTokenForAccount:(id)arg1 teamID:(id)arg2 error:(id *)arg3;
+ (id)tokenForAccount:(id)arg1;
+ (id)_runCertOperations:(id)arg1 token:(struct DVTPortalOperationToken *)arg2;
+ (id)_distributionSigningIdentitiesWithToken:(struct DVTPortalOperationToken *)arg1;
+ (id)_developmentSigningIdentitiesWithToken:(struct DVTPortalOperationToken *)arg1;
+ (id)listTeamsAndRolesForToken:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)listPassTypeIdentifiersForToken:(struct DVTPortalOperationToken *)arg1 error:(id *)arg2;
+ (id)listDevicesForToken:(struct DVTPortalOperationToken *)arg1 error:(id *)arg2;
+ (id)listSigningIdentitiesForToken:(struct DVTPortalOperationToken *)arg1 error:(id *)arg2;
+ (id)listProfilesForToken:(id)arg1 error:(id *)arg2;
+ (id)listTeamsAndRolesWithSession:(id)arg1 account:(id)arg2 error:(id *)arg3;

@end