//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIBotDefinition_BasicInfoEditor : IDEViewController
{
    DVTObservingToken *_scmDefinitionObservingToken;
    DVTObservingToken *_reachabilityObservingToken;
    DVTObservingToken *_userCanCreateBotsObserver;
    BOOL _isCheckingCanCreateBots;
    BOOL _showedPermissionDeniedSheet;
    BOOL _canCreateBotOnServer;
    BOOL _canCreateQueryComplete;
    BOOL _shouldHideServerWarningButton;
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSArray *_servers;
    NSImage *_warningImage;
    XCSUIAccountReachabilityToImageTransformer *_imageTransformer;
    NSPopUpButton *_serversPopup;
    NSTextField *_botNameField;
    NSView *_controlsView;
    NSButton *_serverWarningButton;
}

@property __weak NSButton *serverWarningButton; // @synthesize serverWarningButton=_serverWarningButton;
@property(retain) NSView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain) NSTextField *botNameField; // @synthesize botNameField=_botNameField;
@property(retain) NSPopUpButton *serversPopup; // @synthesize serversPopup=_serversPopup;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(nonatomic) BOOL shouldHideServerWarningButton; // @synthesize shouldHideServerWarningButton=_shouldHideServerWarningButton;
@property(nonatomic) BOOL canCreateQueryComplete; // @synthesize canCreateQueryComplete=_canCreateQueryComplete;
@property(nonatomic) BOOL canCreateBotOnServer; // @synthesize canCreateBotOnServer=_canCreateBotOnServer;
@property(retain, nonatomic) XCSUIAccountReachabilityToImageTransformer *imageTransformer; // @synthesize imageTransformer=_imageTransformer;
@property(retain, nonatomic) NSImage *warningImage; // @synthesize warningImage=_warningImage;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(retain) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (void)setSelectedServer:(id)arg1;
- (void)selectServiceInPopup:(id)arg1;
- (void)addNewServerAction:(id)arg1;
- (void)serverSelectedAction:(id)arg1;
- (void)dummyDummy:(id)arg1;
- (void)_updateServersPopup;
- (void)_clearServersPopup;
- (void)textDidChange:(id)arg1;
- (void)viewWillUninstall;
- (void)commitChanges;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;

@end