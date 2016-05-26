//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTDKAddDeviceService : DTDKTeamBasedService
{
}

+ (id)keyPathsForValuesAffectingDeviceID;
+ (id)keyPathsForValuesAffectingDeviceNumber;
+ (id)keyPathsForValuesAffectingDeviceName;
+ (id)keyPathsForValuesAffectingDevice;
+ (id)serviceForTeam:(id)arg1 andPlatform:(id)arg2 withDeviceIndentifier:(id)arg3 name:(id)arg4 portalDeviceClass:(id)arg5;
- (BOOL)_handlePortalResultCode:(long long)arg1;
@property(readonly) NSString *deviceID;
@property(readonly) NSString *deviceNumber;
@property(readonly) NSString *deviceName;
@property(readonly) NSDictionary *device;
- (id)_errorInfo;

@end