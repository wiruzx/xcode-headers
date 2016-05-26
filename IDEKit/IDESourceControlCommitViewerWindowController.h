//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlCommitViewerWindowController : NSWindowController <NSSplitViewDelegate, IDEReviewFilesViewControllerDelegate, NSLayoutManagerDelegate>
{
    DVTBorderedView *_reviewFilesBorderedView;
    DVTBorderedView *_borderedView;
    NSSplitView *_splitView;
    NSTextView *_commitTextView;
    IDEReviewFilesViewController *_reviewFilesViewController;
    IDESourceControlCommitViewerNavigatorDataSource *_navigatorDataSource;
    IDENavigableItemAsyncFilteringCoordinator *_coordinator;
    IDESourceControlCommitViewerNavigatorDataSource *_fileSystemDataSource;
    IDESourceControlCommitViewerComparisonEditorDataSource *_comparisonEditorDataSource;
    DVTSourceControlLogItem *_logItem;
    struct CGRect _commitMessageRect;
    double _commitMessageSplitMaxHeight;
    BOOL _initialSplitPositionHasHappened;
    DVTObservingToken *_comparisonEditorObservingToken;
    id <DVTSourceControlCancellable> _leftFileOperation;
    id <DVTSourceControlCancellable> _rightFileOperation;
    BOOL leftFileLoaded;
    BOOL rightFileLoaded;
    DVTFilePath *filePathToLoad;
    IDESourceControlReviewFilesDataSource *_workspaceDataSource;
    IDEWorkspace *_workspace;
    NSMutableArray *_documents;
    NSMutableArray *_treeNodes;
    struct CGSize _sizeToSet;
    BOOL _alreadyPresentedExportError;
    DVTFilePath *_initialSelection;
}

+ (void)runPreviewSheetForWindow:(id)arg1 viewingCommit:(id)arg2 withInitialSelection:(id)arg3;
+ (void)initialize;
@property BOOL alreadyPresentedExportError; // @synthesize alreadyPresentedExportError=_alreadyPresentedExportError;
@property(retain) DVTFilePath *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(retain) DVTSourceControlLogItem *logItem; // @synthesize logItem=_logItem;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)ok:(id)arg1;
- (id)loadRevision:(id)arg1 filePath:(id)arg2 fileDocumentLocation:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 diffSide:(unsigned long long)arg5 waitForBothRevisions:(BOOL)arg6 loadPriorRevision:(BOOL)arg7;
- (void)setEditorMessages:(id)arg1;
- (void)willOpenDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelOperations;
- (id)_temporaryFileLocationForRepository:(id)arg1 remotePath:(id)arg2 revisionLocation:(id)arg3 exportPriorRevisionOfFile:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)workspaceDataSource;
- (void)_configureDataSources;
- (void)setInitialSelection:(id)arg1 forNavigatorOutlineView:(id)arg2;
- (id)treeItemFilterPredicate;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (double)_positionOfSplitterWithCommitMessageRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_runSheetForWindow:(id)arg1;
- (id)_workspaceFromWindow:(id)arg1;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableArray *mutableTreeNodes; // @dynamic mutableTreeNodes;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *treeNodes; // @dynamic treeNodes;

@end