//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlCredentialViewController : DVTViewController
{
    BOOL _sshAllowed;
    BOOL _showingSSHStrategy;
    BOOL _urlValid;
    BOOL _showingAnonymousStrategy;
    BOOL _enableAnonymousStrategy;
    BOOL _showingNewKeysStrategy;
    BOOL _enableNewKeysStrategy;
    unsigned long long _disableCount;
    DVTSourceControlAccount *_account;
    DVTSourceControlBasicAuthenticationStrategy *_basicStrategy;
    DVTSourceControlSSHKeysAuthenticationStrategy *_newKeysStrategy;
    DVTSourceControlSSHKeysAuthenticationStrategy *_existingKeysStrategy;
    NSString *_sshKeyComment;
    BOOL _liveUpdate;
    BOOL _liveReflight;
    BOOL _someSSHEligable;
    id <IDESourceControlCredentialViewDelegate> _delegate;
    NSURL *_sshKeyFolderURL;
    NSString *_urlUsername;
    NSString *_urlPassword;
    id <DVTSourceControlCancellable> _validateToken;
    NSTextField *_usernameLabel;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
    DVTCopyTextField *_sshGeneratedKeyField;
    DVTCopyTextField *_sshFilePublicKeyField;
    DVTFilePathField *_sshFilePrivateKeyPathField;
    NSTextField *_sshFileKeyPasswordField;
    NSPopUpButton *_credentialTypeButton;
    NSView *_replacementView;
    NSView *_passwordView;
    NSView *_sshNewView;
    NSView *_sshFileView;
    NSWindow *_createKeysWindow;
    NSSecureTextField *_createKeysPassphraseField;
    NSButton *_createKeysCancelButton;
    NSButton *_createKeysGenerateButton;
}

@property __weak NSButton *createKeysGenerateButton; // @synthesize createKeysGenerateButton=_createKeysGenerateButton;
@property __weak NSButton *createKeysCancelButton; // @synthesize createKeysCancelButton=_createKeysCancelButton;
@property __weak NSSecureTextField *createKeysPassphraseField; // @synthesize createKeysPassphraseField=_createKeysPassphraseField;
@property(retain) NSWindow *createKeysWindow; // @synthesize createKeysWindow=_createKeysWindow;
@property(retain) NSView *sshFileView; // @synthesize sshFileView=_sshFileView;
@property(retain) NSView *sshNewView; // @synthesize sshNewView=_sshNewView;
@property(retain) NSView *passwordView; // @synthesize passwordView=_passwordView;
@property __weak NSView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSPopUpButton *credentialTypeButton; // @synthesize credentialTypeButton=_credentialTypeButton;
@property __weak NSTextField *sshFileKeyPasswordField; // @synthesize sshFileKeyPasswordField=_sshFileKeyPasswordField;
@property __weak DVTFilePathField *sshFilePrivateKeyPathField; // @synthesize sshFilePrivateKeyPathField=_sshFilePrivateKeyPathField;
@property __weak DVTCopyTextField *sshFilePublicKeyField; // @synthesize sshFilePublicKeyField=_sshFilePublicKeyField;
@property __weak DVTCopyTextField *sshGeneratedKeyField; // @synthesize sshGeneratedKeyField=_sshGeneratedKeyField;
@property __weak NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property __weak NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property __weak NSTextField *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain) id <DVTSourceControlCancellable> validateToken; // @synthesize validateToken=_validateToken;
@property(retain) NSString *urlPassword; // @synthesize urlPassword=_urlPassword;
@property(retain) NSString *urlUsername; // @synthesize urlUsername=_urlUsername;
@property(retain) NSURL *sshKeyFolderURL; // @synthesize sshKeyFolderURL=_sshKeyFolderURL;
@property BOOL someSSHEligable; // @synthesize someSSHEligable=_someSSHEligable;
@property BOOL liveReflight; // @synthesize liveReflight=_liveReflight;
@property BOOL liveUpdate; // @synthesize liveUpdate=_liveUpdate;
@property __weak id <IDESourceControlCredentialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) DVTSourceControlAuthenticationStrategy *strategy;
- (void)changeCredentialType:(id)arg1;
- (void)validateAuthentication;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)generateKeys:(id)arg1;
- (void)cancelGenerateKeys:(id)arg1;
@property(getter=isEnabled) BOOL enabled;
- (void)focusPasswordField;
- (void)_enableView;
- (void)_disableView;
- (void)generateNewSSHKeys;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)viewDidLoad;
- (void)setNewSSHKeyFolder:(id)arg1;
- (void)setSSHKeyComment:(id)arg1;
@property BOOL sshAllowed;
- (void)updateURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)_updateWithURL:(id)arg1;
@property BOOL enableNewKeysStrategy;
- (void)_updateNewKeysStrategyDisplay;
@property BOOL enableAnonymousStrategy;
- (void)_updateAnonymousStrategyDisplay;
- (void)primitiveInvalidate;

@end