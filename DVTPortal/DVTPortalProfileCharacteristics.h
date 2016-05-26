//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPortalProfileCharacteristics : NSObject
{
    BOOL _forceExplicitAppID;
    DVTPortalTeam *_team;
    DVTPortalProfileType *_profileType;
    NSString *_bundleID;
    NSDictionary *_features;
    NSDictionary *_containers;
    DVTPlatform *_platform;
}

+ (id)_errorFeatures:(id)arg1 mustMatchContainers:(id)arg2;
+ (BOOL)_allContainers:(id)arg1 haveFeaturesEnabled:(id)arg2 error:(id *)arg3;
@property BOOL forceExplicitAppID; // @synthesize forceExplicitAppID=_forceExplicitAppID;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSDictionary *containers; // @synthesize containers=_containers;
@property(readonly, copy, nonatomic) NSDictionary *features; // @synthesize features=_features;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) DVTPortalProfileType *profileType; // @synthesize profileType=_profileType;
@property(readonly, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)description;
- (void)_setFeaturesToValues:(id)arg1 containerTypesToValues:(id)arg2;
- (id)initWithTeam:(id)arg1 type:(id)arg2 bundleID:(id)arg3 featuresToValues:(id)arg4 containerTypesToValues:(id)arg5 platform:(id)arg6 error:(id *)arg7;

@end