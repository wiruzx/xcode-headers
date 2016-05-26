//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAccountPrefsSourceControlDetailViewController : IDEViewController <IDESourceControlCredentialViewDelegate>
{
    BOOL _addressContainsUser;
    DVTToggleSwitch *_toggleSwitch;
    NSTextField *_addressField;
    NSTextField *_nameField;
    DVTReplacementView *_credentialReplacementView;
    NSImageView *_errorImageView;
    NSProgressIndicator *_verifyingProgressIndicator;
    NSLayoutConstraint *_heightConstraint;
    DVTBorderedView *_borderedView;
    NSString *_connectionError;
}

+ (id)keyPathsForValuesAffectingConnectionError;
@property(retain, nonatomic) NSString *connectionError; // @synthesize connectionError=_connectionError;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property __weak NSProgressIndicator *verifyingProgressIndicator; // @synthesize verifyingProgressIndicator=_verifyingProgressIndicator;
@property __weak NSImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property __weak DVTReplacementView *credentialReplacementView; // @synthesize credentialReplacementView=_credentialReplacementView;
@property __weak NSTextField *nameField; // @synthesize nameField=_nameField;
@property __weak NSTextField *addressField; // @synthesize addressField=_addressField;
@property __weak DVTToggleSwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
@property(readonly) BOOL addressContainsUser; // @synthesize addressContainsUser=_addressContainsUser;
- (void).cxx_destruct;
- (void)viewNeedsHeight:(double)arg1;
- (void)clearWarningAndProgressText;
- (void)showProgressText:(id)arg1;
- (void)showWarningText:(id)arg1;
- (void)primitiveInvalidate;
- (void)setRepresentedObject:(id)arg1;
- (id)contextMenu;
- (void)viewDidInstall;
- (void)controlTextDidChange:(id)arg1;
@property(readonly) DVTSourceControlAccount *account;
- (id)nibName;
- (id)credentialViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end