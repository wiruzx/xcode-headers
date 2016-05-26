//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlWorkingCopyEditWindowController : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTReplacementViewDelegate, IDESourceControlBranchTableDelegate, DVTTabChooserViewDelegate>
{
    DVTBorderedView *_borderedView;
    NSTextField *_windowTitle;
    DVTReplacementView *_detailView;
    DVTReplacementView *_branchesReplacementView;
    DVTBorderedView *_infoContainerView;
    NSTextField *_workingCopyURLField;
    NSTextField *_workingCopyLocalURLField;
    NSButton *_includedInCheckout;
    NSPopUpButton *_checkoutPopupButton;
    NSTextField *_checkoutDescriptionTextField;
    NSTabView *_tabView;
    NSDictionary *_wccConfigurationDictionary;
    DVTChoice *_infoChoice;
    DVTChoice *_configChoice;
    DVTChoice *_remotesChoice;
    DVTChoice *_branchesChoice;
    NSButton *_okButton;
    IDESourceControlWorkingCopyEditWindowController *_wc;
    DVTObservingToken *_tabChooserSelectionObservingToken;
    NSMutableArray *_wcEditedObservers;
    BOOL _editedWorkingCopyConfiguration;
    id <DVTSourceControlCancellable> _currentBranchToken;
    DVTTabChooserView *_tabChooser;
    IDEWorkspace *_workspace;
    DVTSourceControlWorkingCopy *_workingCopy;
    DVTSourceControlRemoteRepository *_remoteRepository;
    CDUnknownBlockType _continuationBlock;
}

@property(copy) CDUnknownBlockType continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property(retain) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
- (void).cxx_destruct;
- (void)setRequired:(id)arg1;
- (void)setOptional:(id)arg1;
- (void)setIncludedInCheckout:(id)arg1;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (void)_setupStatePopup;
- (void)didRemoveBranch;
- (void)willRemoveBranch;
- (void)_fetchBranches;
- (void)reloadCurrentBranch;
- (void)_fetchRemotes;
- (void)_showConfig;
- (void)_setupDetailViewWithSelectedChoiceIdentifier:(id)arg1;
- (id)branchTableViewController;
- (void)displayError:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)done:(id)arg1;
- (void)beginSheetWithSelectedTab:(id)arg1 forWindow:(id)arg2;
- (void)beginSheetForWindow:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end