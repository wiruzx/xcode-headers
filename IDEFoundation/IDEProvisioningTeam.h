//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProvisioningTeam : NSObject <IDEProvisioningTeam>
{
    BOOL _freeProvisioningTeam;
    NSString *_teamID;
    NSString *_name;
    NSString *_displayName;
    NSSet *_supportedCertificateKinds;
}

+ (id)cachedTeamsForUsername:(id)arg1;
+ (void)cacheTeams:(id)arg1 accountUsername:(id)arg2;
+ (id)cachedProvisioningTeamForTeamID:(id)arg1;
@property(copy) NSSet *supportedCertificateKinds; // @synthesize supportedCertificateKinds=_supportedCertificateKinds;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (void).cxx_destruct;
- (id)userDefaultsRepresentation;
- (id)initWithUserDefaultsRepresentation:(id)arg1;
- (BOOL)canCreateCertificatesOfKind:(id)arg1;
@property(readonly, nonatomic, getter=isFreeProvisioningTeam) BOOL freeProvisioningTeam; // @synthesize freeProvisioningTeam=_freeProvisioningTeam;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPortalTeam:(id)arg1;
- (id)initWithTeamID:(id)arg1 name:(id)arg2 freeProvisioningTeam:(BOOL)arg3 supportedCertificateKinds:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end