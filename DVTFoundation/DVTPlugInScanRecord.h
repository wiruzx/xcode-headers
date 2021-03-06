//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPlugInScanRecord : NSObject <DVTPropertyListEncoding>
{
    NSString *_path;
    NSString *_bundlePath;
    NSBundle *_bundle;
    NSString *_identifier;
    BOOL _isApplePlugIn;
    NSString *_marketingVersion;
    NSDictionary *_bundleRawInfoPlist;
    NSDictionary *_plugInPlist;
    double _timestamp;
    NSSet *_requiredCapabilities;
    DVTVersion *_minimumRequiredSystemVersion;
    DVTVersion *_maximumAllowedSystemVersion;
    DVTPlugIn *_plugIn;
    NSSet *_plugInCompatibilityUUIDs;
}

+ (void)initialize;
@property(retain) DVTPlugIn *plugIn; // @synthesize plugIn=_plugIn;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSDictionary *plugInPlist; // @synthesize plugInPlist=_plugInPlist;
@property(readonly, copy) NSSet *plugInCompatibilityUUIDs; // @synthesize plugInCompatibilityUUIDs=_plugInCompatibilityUUIDs;
@property(readonly, copy) DVTVersion *maximumAllowedSystemVersion; // @synthesize maximumAllowedSystemVersion=_maximumAllowedSystemVersion;
@property(readonly, copy) DVTVersion *minimumRequiredSystemVersion; // @synthesize minimumRequiredSystemVersion=_minimumRequiredSystemVersion;
@property(readonly, copy) NSSet *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, copy) NSDictionary *bundleRawInfoPlist; // @synthesize bundleRawInfoPlist=_bundleRawInfoPlist;
@property(readonly, copy) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(readonly) BOOL isApplePlugIn; // @synthesize isApplePlugIn=_isApplePlugIn;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)loadRequiredCapabilities:(id *)arg1;
- (BOOL)_loadBundleRawInfoPlist:(id *)arg1;
- (BOOL)loadPlugInPlist:(id *)arg1;
- (id)_contentsOfPlistAtURL:(id)arg1 error:(id *)arg2;
- (void)_instantiateBundleIfNecessary;
- (BOOL)isEquivalentToPlistRepresentation:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (id)initWithPath:(id)arg1 bundle:(id)arg2 plugInPlist:(id)arg3 timestamp:(double)arg4;
- (id)initWithPath:(id)arg1 bundlePath:(id)arg2 plugInPlist:(id)arg3 timestamp:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end