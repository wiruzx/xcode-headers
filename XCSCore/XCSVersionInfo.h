//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSVersionInfo : XCSObject
{
}

+ (id)versionInfoWithServer:(id)arg1 xcode:(id)arg2 os:(id)arg3 couchDB:(id)arg4 node:(id)arg5 xcodeServer:(id)arg6 validationErrors:(id *)arg7;
- (BOOL)validateVersionInfoWithServer:(id)arg1 xcode:(id)arg2 os:(id)arg3 couchDB:(id)arg4 node:(id)arg5 xcodeServer:(id)arg6 validationErrors:(id *)arg7;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initVersionInfoWithID:(id)arg1 rev:(id)arg2 tinyID:(id)arg3 docType:(id)arg4 service:(id)arg5 server:(id)arg6 xcode:(id)arg7 os:(id)arg8 couchDB:(id)arg9 node:(id)arg10 xcodeServer:(id)arg11 validationErrors:(id *)arg12;

// Remaining properties
@property(copy, nonatomic) NSString *couchDB; // @dynamic couchDB;
@property(copy, nonatomic) NSString *node; // @dynamic node;
@property(copy, nonatomic) NSString *os; // @dynamic os;
@property(copy, nonatomic) NSString *server; // @dynamic server;
@property(copy, nonatomic) NSString *xcode; // @dynamic xcode;
@property(copy, nonatomic) NSString *xcodeServer; // @dynamic xcodeServer;

@end