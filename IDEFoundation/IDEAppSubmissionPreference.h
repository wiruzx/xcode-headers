//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAppSubmissionPreference : NSObject
{
    BOOL _developerWantsBitCodeSubmitted;
    long long _appStoreStrippingSupportLevelMachineCode;
    long long _appStoreStrippingSupportLevelBitCode;
    long long _appStoreOnDemandResourcesSupportLevel;
}

@property(readonly) BOOL developerWantsBitCodeSubmitted; // @synthesize developerWantsBitCodeSubmitted=_developerWantsBitCodeSubmitted;
@property(readonly) long long appStoreOnDemandResourcesSupportLevel; // @synthesize appStoreOnDemandResourcesSupportLevel=_appStoreOnDemandResourcesSupportLevel;
@property(readonly) long long appStoreStrippingSupportLevelBitCode; // @synthesize appStoreStrippingSupportLevelBitCode=_appStoreStrippingSupportLevelBitCode;
@property(readonly) long long appStoreStrippingSupportLevelMachineCode; // @synthesize appStoreStrippingSupportLevelMachineCode=_appStoreStrippingSupportLevelMachineCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly) unsigned long long strippingOptions;
- (id)initWithAppStoreStrippingSupportLevelMachineCode:(long long)arg1 appStoreStrippingSupportLevelBitCode:(long long)arg2 developerWantsBitCodeSubmitted:(BOOL)arg3 appStoreOnDemandResourcesSupportLevel:(long long)arg4;

@end