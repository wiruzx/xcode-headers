//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIIntegrationCommitsViewController : DVTViewController <NSTableViewDelegate, NSTableViewDataSource, XCSBotSupportingEditorHostedViewController>
{
    NSArray *_contributors;
    NSArray *_allCommits;
    NSMapTable *_contributorsAndFilesChangedCount;
    NSMapTable *_contributorsAndBadgeViews;
    XCSContributor *_showingDetailsContributor;
    double _defaultHeight;
    NSArray *_currentSelectedDocumentLocations;
    XCSIntegration *_integration;
    XCSBotSupportingEditor *_botSupportingEditor;
    XCSBot *_bot;
    NSTableView *_committersTableView;
    unsigned long long _countOfFilesChangedInIntegration;
    NSTextField *_contributorsTextField;
    NSTextField *_commitsTextField;
    NSTextField *_filesChangedTextField;
    NSTextField *_mainContributorTextField;
    XCSUIInsetHorizontalDividerLine *_dividerLine;
    NSView *_commitDetailsView;
    NSView *_commitBadgesView;
    _XCSUIAllCommittersBadgeView *_allCommittersBadgeView;
    DVTScrollView *_committersScrollView;
    DVTReplacementView *_contributorDetailsReplacementView;
    XCSUIProgressReplacementView *_progressReplacementView;
    NSView *_contentCustomView;
    NSView *_commitsView;
    NSView *_noCommitsView;
    DVTLozengeTextField *_noCommitsLozenge;
    NSView *_placeholder;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property __weak NSView *placeholder; // @synthesize placeholder=_placeholder;
@property __weak DVTLozengeTextField *noCommitsLozenge; // @synthesize noCommitsLozenge=_noCommitsLozenge;
@property __weak NSView *noCommitsView; // @synthesize noCommitsView=_noCommitsView;
@property __weak NSView *commitsView; // @synthesize commitsView=_commitsView;
@property __weak NSView *contentCustomView; // @synthesize contentCustomView=_contentCustomView;
@property __weak XCSUIProgressReplacementView *progressReplacementView; // @synthesize progressReplacementView=_progressReplacementView;
@property __weak DVTReplacementView *contributorDetailsReplacementView; // @synthesize contributorDetailsReplacementView=_contributorDetailsReplacementView;
@property __weak DVTScrollView *committersScrollView; // @synthesize committersScrollView=_committersScrollView;
@property __weak _XCSUIAllCommittersBadgeView *allCommittersBadgeView; // @synthesize allCommittersBadgeView=_allCommittersBadgeView;
@property __weak NSView *commitBadgesView; // @synthesize commitBadgesView=_commitBadgesView;
@property __weak NSView *commitDetailsView; // @synthesize commitDetailsView=_commitDetailsView;
@property __weak XCSUIInsetHorizontalDividerLine *dividerLine; // @synthesize dividerLine=_dividerLine;
@property __weak NSTextField *mainContributorTextField; // @synthesize mainContributorTextField=_mainContributorTextField;
@property __weak NSTextField *filesChangedTextField; // @synthesize filesChangedTextField=_filesChangedTextField;
@property __weak NSTextField *commitsTextField; // @synthesize commitsTextField=_commitsTextField;
@property __weak NSTextField *contributorsTextField; // @synthesize contributorsTextField=_contributorsTextField;
@property unsigned long long countOfFilesChangedInIntegration; // @synthesize countOfFilesChangedInIntegration=_countOfFilesChangedInIntegration;
@property __weak NSTableView *committersTableView; // @synthesize committersTableView=_committersTableView;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, copy) NSArray *currentSelectedItems;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
- (void)toggleDetailViewForTableCellView:(id)arg1 committer:(id)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_badgeViewForCommitter:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)drawDividerLineWithPointerToBadge:(id)arg1;
- (void)showDividerLinePointer;
- (void)hideDividerLinePointer;
- (id)commitsDetailViewController;
- (void)showCommitsView;
- (void)showNoCommitsView:(id)arg1;
- (void)refreshUI;
- (void)hideAllBadge;
- (void)addTableColumnsForContributorsWithColumnWidth:(double)arg1;
- (void)showBadges;
- (void)hideBadges;
- (void)updateCommitDetailsWithCommitHistory:(id)arg1;
- (void)refreshLogViewWithSourceControlLogItems:(id)arg1;
- (id)logItemForCommit:(id)arg1;
- (void)committersScrollViewContentBoundsDidChange:(id)arg1;
- (void)observeCommittersScrollView;
- (void)removeAllTableColumns;
- (id)contributors;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end