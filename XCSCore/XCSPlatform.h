//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSPlatform : XCSObject
{
}

+ (id)platformWithIdentifier:(id)arg1 displayName:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 simulatorIdentifier:(id)arg5 validationErrors:(id *)arg6;
@property(readonly) BOOL supportsArchitectureTypes;
@property(readonly) BOOL supportsFilterTypes;
- (BOOL)_validateIdentifier:(id)arg1 displayName:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 simulatorIdentifier:(id)arg5 validationErrors:(id *)arg6;
- (id)_initWithID:(id)arg1 revision:(id)arg2 identifier:(id)arg3 displayName:(id)arg4 version:(id)arg5 buildNumber:(id)arg6 simulatorIdentifier:(id)arg7 validationErrors:(id *)arg8;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) NSString *buildNumber; // @dynamic buildNumber;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *simulatorIdentifier; // @dynamic simulatorIdentifier;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end