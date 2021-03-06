//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDeveloperAccount : NSObject
{
    DVTDispatchLock *_lock;
    BOOL _enabled;
    BOOL _alwaysLogInUsingQA;
    DVTDeveloperAccountSession *_session;
    DVTDeveloperAccountCredentials *_accountCredentials;
    NSString *_userDescription;
    NSString *_credentialsErrorDescription;
}

+ (id)keyPathsForValuesAffectingUserDescriptionOrBestGuess;
+ (id)keyPathsForValuesAffectingHasPassword;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)_accountWithPropertyListRepresentation:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 error:(id *)arg3;
+ (id)accountWithIdentity:(struct OpaqueSecIdentityRef *)arg1;
+ (id)accountWithCredentials:(id)arg1;
@property BOOL alwaysLogInUsingQA; // @synthesize alwaysLogInUsingQA=_alwaysLogInUsingQA;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSString *credentialsErrorDescription; // @synthesize credentialsErrorDescription=_credentialsErrorDescription;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy) DVTDeveloperAccountCredentials *accountCredentials; // @synthesize accountCredentials=_accountCredentials;
- (void).cxx_destruct;
- (void)checkForValidCredentials:(CDUnknownBlockType)arg1;
- (void)validateCredentialsWithCallback:(CDUnknownBlockType)arg1;
@property(readonly) NSDictionary *propertyListRepresentation;
@property(readonly) NSString *userDescriptionOrBestGuess;
@property(readonly) BOOL hasPassword;
@property(copy) NSString *password;
@property(readonly) struct OpaqueSecIdentityRef *identity;
@property(readonly) _Bool isCertBased;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *username;
- (void)revokeSession:(id)arg1;
- (id)sessionIfAvailable;
@property(readonly) DVTDeveloperAccountSession *session; // @synthesize session=_session;
- (void)executeWithSession:(CDUnknownBlockType)arg1;
- (id)sessionByLoggingInIfNeeded:(id *)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)init;

@end