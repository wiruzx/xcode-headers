//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDEDistirubtionSigningAssetsStepCodesignableDevice : NSObject <DVTCodesignableDevice>
{
    NSString *_name;
    NSString *_identifier;
    NSString *_platformIdentifier;
}

+ (id)codesignableDeviceWithName:(id)arg1 identifier:(id)arg2 dvtPlatformIdentifier:(id)arg3;
@property(readonly, copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly) BOOL supportsProvisioning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end