//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlDownloadStartAssistant : IDEAssistant <NSTableViewDataSource, NSTableViewDelegate>
{
    DVTChoice *_recentsChoice;
    DVTChoice *_favoritesChoice;
    DVTChoice *_repositoriesChoice;
    DVTObservingToken *_recentWorkspacesToken;
    DVTObservingToken *_knownReposToken;
    NSImage *repoImage;
    NSImage *workspaceImage;
    BOOL didLoadRecents;
    BOOL didLoadRepos;
    NSButton *favouriteButton;
    BOOL canGoForward;
    BOOL _showFavouritesOnly;
    BOOL _displayLoadingIcon;
    NSString *_filterString;
    NSOrderedSet *_recentWorkspacesSet;
    NSOrderedSet *_repositoriesSet;
    DVTReplacementView *_currentContentView;
    DVTTableView *_tableView;
    DVTOutlineView *_outlineView;
    NSOrderedSet *_content;
    NSOrderedSet *_filteredRepositoriesWorkspacesSet;
    DVTSearchField *_searchField;
    NSTextField *_repositoryUrlTextField;
    DVTBorderedView *_wrapBorderedView;
    DVTBorderedView *_searchBarBorderedView;
    DVTScrollView *_scrollView;
}

+ (id)keyPathsForValuesAffectingFilteredRepositoriesWorkspacesSet;
+ (BOOL)wantsTransparentBackground;
@property __weak DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak DVTBorderedView *searchBarBorderedView; // @synthesize searchBarBorderedView=_searchBarBorderedView;
@property __weak DVTBorderedView *wrapBorderedView; // @synthesize wrapBorderedView=_wrapBorderedView;
@property __weak NSTextField *repositoryUrlTextField; // @synthesize repositoryUrlTextField=_repositoryUrlTextField;
@property __weak DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property BOOL displayLoadingIcon; // @synthesize displayLoadingIcon=_displayLoadingIcon;
@property BOOL showFavouritesOnly; // @synthesize showFavouritesOnly=_showFavouritesOnly;
@property(retain) NSOrderedSet *filteredRepositoriesWorkspacesSet; // @synthesize filteredRepositoriesWorkspacesSet=_filteredRepositoriesWorkspacesSet;
@property(retain) NSOrderedSet *content; // @synthesize content=_content;
@property __weak DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property __weak DVTReplacementView *currentContentView; // @synthesize currentContentView=_currentContentView;
@property BOOL canGoForward; // @synthesize canGoForward;
- (void).cxx_destruct;
- (void)didDoubleClickForRow:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateState;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)setFavorite:(id)arg1;
@property(retain) NSString *filterString; // @synthesize filterString=_filterString;
- (void)filterAndReloadData;
@property(retain) NSOrderedSet *repositoriesSet; // @synthesize repositoriesSet=_repositoriesSet;
@property(retain) NSOrderedSet *recentWorkspacesSet; // @synthesize recentWorkspacesSet=_recentWorkspacesSet;
- (void)controlTextDidChange:(id)arg1;
- (void)updateLoadingState;
- (void)clickFavouriteButton:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)nextAssistantIdentifier;
- (void)updateCanGoForward;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (BOOL)canCancel;
- (id)assistantTitle;
- (id)downloadAssistantContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end