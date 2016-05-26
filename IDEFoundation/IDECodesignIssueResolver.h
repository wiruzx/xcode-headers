//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECodesignIssueResolver : NSObject
{
    IDEProvisioningPortal *_portal;
}

+ (id)defaultResolver;
@property(retain) IDEProvisioningPortal *portal; // @synthesize portal=_portal;
- (void).cxx_destruct;
- (id)_resolutionOptionsForMissingProfilesWithAccount:(id)arg1 portalTeamID:(id)arg2 signingCertificate:(id)arg3 platformIdentifier:(id)arg4 appIDRequirements:(id)arg5 requiredCodesignableDevicesOrNil:(id)arg6 provisioningProfilePurpose:(unsigned long long)arg7 logAspect:(id)arg8;
- (id)_resolutionOptionsForMissingNewestCertWithAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 platformIdentifier:(id)arg4 existingCertificateSerialNumber:(id)arg5 logAspect:(id)arg6;
- (id)_resolutionOptionsForNoCertWithAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 platformIdentifier:(id)arg4 logAspect:(id)arg5;
- (id)determineResolutionOptionsForAccount:(id)arg1 portalTeamID:(id)arg2 certificateKind:(id)arg3 installerCertificateKindOrNil:(id)arg4 platformIdentifier:(id)arg5 appIDRequirements:(id)arg6 requireProvisioningProfiles:(BOOL)arg7 requiredCodesignableDevicesOrNil:(id)arg8 alreadyRegisteredCodesignableDevices:(BOOL)arg9 provisioningProfilePurpose:(unsigned long long)arg10 logAspectOrNil:(id)arg11;
- (id)determineResolutionOptionsForInputs:(id)arg1 account:(id)arg2 logAspectOrNil:(id)arg3;
- (id)logAspect;
- (id)initWithPortal:(id)arg1;

@end