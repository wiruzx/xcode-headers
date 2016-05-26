//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPortalContainerType : NSObject <NSCopying>
{
    BOOL _supportsAssociationService;
    BOOL _canBeViewedByEnterprise;
    BOOL _canBeModifiedByEnterprise;
    BOOL _canBeModifiedByMembers;
    BOOL _canBeUsedByUniversityMembers;
    BOOL _canBeUsedByUniversityTeams;
    NSString *_identifier;
    NSString *_name;
    NSString *_requiredPrefix;
    Class _containerImplementingClass;
    NSString *_portalFeatureIdentifier;
}

+ (id)portalContainerTypeWithIdentifier:(id)arg1;
+ (id)identifierToContainerType;
+ (id)portalContainerTypeWithProfileFeatureIdentifier:(id)arg1;
+ (id)portalFeatureIdentifierToContainerType;
+ (id)portalContainerTypes;
@property(readonly, nonatomic) BOOL canBeUsedByUniversityTeams; // @synthesize canBeUsedByUniversityTeams=_canBeUsedByUniversityTeams;
@property(readonly, nonatomic) BOOL canBeUsedByUniversityMembers; // @synthesize canBeUsedByUniversityMembers=_canBeUsedByUniversityMembers;
@property(readonly, nonatomic) BOOL canBeModifiedByMembers; // @synthesize canBeModifiedByMembers=_canBeModifiedByMembers;
@property(readonly, nonatomic) BOOL canBeModifiedByEnterprise; // @synthesize canBeModifiedByEnterprise=_canBeModifiedByEnterprise;
@property(readonly, nonatomic) BOOL canBeViewedByEnterprise; // @synthesize canBeViewedByEnterprise=_canBeViewedByEnterprise;
@property(readonly, nonatomic) NSString *portalFeatureIdentifier; // @synthesize portalFeatureIdentifier=_portalFeatureIdentifier;
@property BOOL supportsAssociationService; // @synthesize supportsAssociationService=_supportsAssociationService;
@property(retain) Class containerImplementingClass; // @synthesize containerImplementingClass=_containerImplementingClass;
@property(readonly, nonatomic) NSString *requiredPrefix; // @synthesize requiredPrefix=_requiredPrefix;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 requiredPrefix:(id)arg3 containerImplementingClass:(Class)arg4 supportsAssociationService:(BOOL)arg5 canBeModifiedByMembers:(BOOL)arg6 canBeViewedByEnterprise:(BOOL)arg7 canBeModifiedByEnterprise:(BOOL)arg8 canBeUsedByUniversityMembers:(BOOL)arg9 canBeUsedByUniversityTeams:(BOOL)arg10 portalFeatureIdentifier:(id)arg11;

@end