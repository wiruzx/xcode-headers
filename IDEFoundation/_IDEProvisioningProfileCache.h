//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDEProvisioningProfileCache : NSObject <NSCoding>
{
    NSSet *_provisioningProfiles;
}

+ (id)provisioningProfileCacheFromFileAtPath:(id)arg1;
+ (id)cacheFilepath;
@property(readonly) NSSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeCacheToFileAtPath:(id)arg1;
- (id)initWithProvisioningProfiles:(id)arg1;

@end