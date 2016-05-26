//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTOnboardingTutorialAddAppleID : DVTOnboardingPage <NSTextFieldDelegate>
{
    NSTextField *_appleIDField;
    NSSecureTextField *_passwordField;
    NSButton *_forgotPasswordButton;
    NSTextField *_errorField;
    NSButton *_createAppleIDButton;
}

@property(retain) NSButton *createAppleIDButton; // @synthesize createAppleIDButton=_createAppleIDButton;
@property __weak NSTextField *errorField; // @synthesize errorField=_errorField;
@property __weak NSButton *forgotPasswordButton; // @synthesize forgotPasswordButton=_forgotPasswordButton;
@property __weak NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property __weak NSTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
- (void).cxx_destruct;
- (id)_accountWithAppleID:(id)arg1 password:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)willNavigateToNextPage;
- (BOOL)readyForNextPage;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)createAppleIDAction:(id)arg1;
- (void)forgotAppleIDAction:(id)arg1;
- (void)passwordAction:(id)arg1;
- (void)appleIDAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end