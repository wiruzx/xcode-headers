//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIAccountPrefsServerDetailViewController : IDEViewController
{
    DVTObservingToken *_serverEnabledWatcher;
    DVTObservingToken *_serverCompatibilityWatcher;
    unsigned long long _resolutionOperationCount;
    BOOL _authenticateAsRegisteredUser;
    BOOL _showServerCompatibilityWarning;
    BOOL _resolving;
    NSImageView *_connectionErrorImageView;
    DVTToggleSwitch *_enableSwitch;
    NSTextField *_addressTextField;
    NSButton *_viewServerButton;
    DVTBorderedView *_borderedView;
    NSImageView *_compatibilityImageView;
    NSTextField *_userNameTextField;
    NSSecureTextField *_passwordSecureTextField;
    unsigned long long _authenticationUserType;
    NSError *_lastKnownConnectionError;
    NSString *_serverAPIVersionString;
    NSString *_fullVersionString;
    NSString *_internalVersionString;
}

+ (id)keyPathsForValuesAffectingLastKnownConnectionErrorDescription;
+ (id)keyPathsForValuesAffectingConnectionAddress;
@property(nonatomic) BOOL resolving; // @synthesize resolving=_resolving;
@property(retain, nonatomic) NSString *internalVersionString; // @synthesize internalVersionString=_internalVersionString;
@property(retain, nonatomic) NSString *fullVersionString; // @synthesize fullVersionString=_fullVersionString;
@property(retain, nonatomic) NSString *serverAPIVersionString; // @synthesize serverAPIVersionString=_serverAPIVersionString;
@property(retain, nonatomic) NSError *lastKnownConnectionError; // @synthesize lastKnownConnectionError=_lastKnownConnectionError;
@property(nonatomic) unsigned long long authenticationUserType; // @synthesize authenticationUserType=_authenticationUserType;
@property __weak NSSecureTextField *passwordSecureTextField; // @synthesize passwordSecureTextField=_passwordSecureTextField;
@property __weak NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property __weak NSImageView *compatibilityImageView; // @synthesize compatibilityImageView=_compatibilityImageView;
@property BOOL showServerCompatibilityWarning; // @synthesize showServerCompatibilityWarning=_showServerCompatibilityWarning;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSButton *viewServerButton; // @synthesize viewServerButton=_viewServerButton;
@property __weak NSTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
@property __weak DVTToggleSwitch *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
@property BOOL authenticateAsRegisteredUser; // @synthesize authenticateAsRegisteredUser=_authenticateAsRegisteredUser;
@property(retain) NSImageView *connectionErrorImageView; // @synthesize connectionErrorImageView=_connectionErrorImageView;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long resolutionOperationCount;
- (void)completeResolutionOperation;
- (void)startResolutionOperation;
@property(readonly) NSImage *accountImage;
- (void)refreshVersionString:(id)arg1;
- (void)updateVersionDisplay:(id)arg1;
@property(readonly, nonatomic) NSString *lastKnownConnectionErrorDescription;
- (void)viewServer:(id)arg1;
@property(retain, nonatomic) NSString *password;
@property(retain, nonatomic) NSString *username;
@property(retain, nonatomic) NSString *displayName;
- (void)retryConnection;
- (void)refreshConnectionAddress;
- (void)setRepresentedObject:(id)arg1;
- (id)contextMenu;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)updatePassword:(id)arg1;
- (void)updateUsername:(id)arg1;

@end