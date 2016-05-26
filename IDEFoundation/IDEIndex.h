//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEIndex : NSObject <IDEIndexDatabaseDelegate, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    DVTFilePath *_databaseFile;
    IDEIndexingPrebuildController *_prebuildController;
    IDEIndexingEngine *_engine;
    IDEIndexQPManager *_qpManager;
    NSMutableDictionary *_identifiersToIndexables;
    NSMutableDictionary *_indexablesToProductHeaders;
    NSMutableDictionary *_copiedHeadersToSources;
    NSMutableDictionary *_sourceHeadersToIndexables;
    NSSet *_preferredTargets;
    NSSet *_priorityTargets;
    IDEIndexDatabase *_workspaceDatabase;
    long long _purgeCount;
    DVTDispatchLock *_stateLock;
    DVTDispatchLock *_pchCreationLock;
    NSMutableDictionary *_pchFiles;
    NSDate *_lastErrorTime;
    BOOL _isCancelled;
    BOOL _isInErrorRecoveryMode;
    BOOL _isReadOnly;
    BOOL _cleanedUpOldPCHs;
    DVTObservingToken *_indexFolderPathObservingToken;
    DVTObservingToken *_activeRunContextObservingToken;
    DVTObservingToken *_activeRunDestinationObservingToken;
    DVTNotificationToken *_indexableFileWasAddedNotificationObservingToken;
    DVTNotificationToken *_indexableFileWillBeRemovedNotificationObservingToken;
    DVTNotificationToken *_indexableDidRenameFileNotificationObservingToken;
    DVTNotificationToken *_buildablesDidChangeNotificationObservingToken;
    DVTNotificationToken *_buildSettingsDidChangeNotificationObservingToken;
    DVTNotificationToken *_buildOperationDidStopNotificationObservingToken;
}

+ (BOOL)languageSupportsSymbolColoring:(id)arg1;
+ (id)resolutionForName:(id)arg1 kind:(id)arg2 containerName:(id)arg3;
+ (id)pathToClang;
+ (id)_dataSourceExtensionForFile:(id)arg1 withLanguage:(id)arg2;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)supportsInvalidationPrevention;
+ (void)createIndexForWorkspace:(id)arg1 withState:(id)arg2;
+ (id)_databaseFolderForWorkspace:(id)arg1;
+ (void)syncPerformBlockOnMainThread:(CDUnknownBlockType)arg1;
+ (void)initialize;
+ (BOOL)searchQualifiedNames;
+ (BOOL)includeAutoImportResults;
+ (id)schedulingLogAspect;
+ (id)clangInvocationLogAspect;
+ (id)symbolAdditionLogAspect;
+ (id)deferredMetricLogAspect;
+ (id)metricLogAspect;
+ (id)logAspect;
@property(readonly, nonatomic) DVTFilePath *databaseFile; // @synthesize databaseFile=_databaseFile;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDEIndexingPrebuildController *prebuildController; // @synthesize prebuildController=_prebuildController;
@property(readonly, nonatomic) IDEIndexDatabase *database; // @synthesize database=_workspaceDatabase;
- (void).cxx_destruct;
- (id)symbolDumpForFile:(id)arg1;
- (id)targetIdentifiersForFile:(id)arg1;
- (id)mainFilesForFile:(id)arg1;
- (id)sdkForFile:(id)arg1;
- (id)timestampForFile:(id)arg1;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_buildSettingsDidChange:(id)arg1;
- (void)_activeRunDestinationDidChange:(id)arg1;
- (void)_activeRunContextDidChange:(id)arg1;
- (void)_clearAllCachedBuildSettings;
- (void)_computePreferredTargets;
- (BOOL)isPreferredTarget:(id)arg1 priority:(char *)arg2;
- (BOOL)isPreferredTarget:(id)arg1;
- (id)databaseQueryProvider;
- (id)queryProviderForLocation:(id)arg1 highPriority:(BOOL)arg2;
- (void)dontDeferJobForFile:(id)arg1 indexable:(id)arg2;
- (void)registerHotFile:(id)arg1;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;
- (id)resolutionForName:(id)arg1 kind:(id)arg2 containerName:(id)arg3;
- (id)indexableForCopiedHeader:(id)arg1;
- (id)originalPathsForPaths:(id)arg1;
- (id)effectivePathForHeader:(id)arg1;
- (void)_initCopiedHeaders;
- (void)indexModuleIfNeeded:(id)arg1 settings:(id)arg2;
- (void)indexModuleIfNeeded:(id)arg1;
- (void)_cleanupOldPCHs;
- (void)didCancelIndexingPCHFile:(id)arg1;
- (BOOL)createPCHFile:(id)arg1 arguments:(id)arg2 hashCriteria:(id)arg3 target:(id)arg4 session:(id)arg5 willIndex:(BOOL)arg6 translationUnit:(id *)arg7;
- (void)database:(id)arg1 reportAutoQueryProgress:(double)arg2;
- (void)clearPCHFailuresForDatabase:(id)arg1;
- (void)databaseDidReportError:(id)arg1;
- (void)databaseDidLoad:(id)arg1;
- (void)databaseDidOpen:(id)arg1;
- (id)databaseProvidersAndVersions:(id)arg1;
- (void)database:(id)arg1 didForgetFiles:(id)arg2;
- (void)database:(id)arg1 didEndImportSession:(id)arg2;
- (void)databaseDidSave:(id)arg1;
- (void)databaseDidIndexHotFile:(id)arg1;
- (void)_respondToFileChangeNotification:(id)arg1;
@property(readonly, nonatomic) DVTFilePath *workspaceFile;
@property(readonly, nonatomic) NSString *workspaceName;
- (id)dataSourceExtensionForFile:(id)arg1 settings:(id)arg2;
- (id)_dataSourceExtensionForFile:(id)arg1 withSettings:(id)arg2;
- (id)settingsForFile:(id)arg1 indexable:(id)arg2;
- (id)_waitForSettingsForFile:(id)arg1 object:(id)arg2;
- (id)_waitForSettingsFromObject:(id)arg1;
- (void)waitForBuildSystem:(id)arg1;
- (id)workspaceHeadersForIndexable:(id)arg1;
- (void)gatherProductHeadersForIndexable:(id)arg1;
- (long long)purgeCount;
- (void)purgeFileCaches;
- (void)primitiveInvalidate;
- (void)editorWillSaveFile:(id)arg1;
- (void)expediteIndexing;
- (void)_stopIndexing;
- (void)setThrottleFactor:(double)arg1;
- (void)resumeIndexing;
- (void)suspendIndexing;
@property(readonly, nonatomic) BOOL shouldAllowRefactoring;
@property(readonly, nonatomic) BOOL isQuiescent;
- (void)doWhenFilesReady:(CDUnknownBlockType)arg1;
- (void)willRegisterMoreFiles:(BOOL)arg1;
- (void)unregisterFile:(id)arg1;
- (void)registerFile:(id)arg1;
- (id)indexableForIdentifier:(id)arg1;
- (void)unregisterObject:(id)arg1;
- (void)registerObject:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)setIndexState:(id)arg1;
- (id)indexState;
@property(readonly) DVTFilePath *workspaceBuildProductsDirPath;
@property(readonly) DVTFilePath *headerMapFilePath;
- (void)setKeyPathObservers:(id)arg1;
- (BOOL)isCurrentForWorkspace:(id)arg1;
- (void)beginTextIndexing;
- (id)initWithFolder:(id)arg1;
- (id)initWithFolder:(id)arg1 forWorkspace:(id)arg2 withState:(id)arg3;
- (void)_cleanupOldIndexFoldersForWorkspace:(id)arg1 preservingFolders:(id)arg2;
- (void)_cleanupOldIndexFoldersForWorkspace:(id)arg1;
- (double)_atime:(struct stat *)arg1;
- (BOOL)_stat:(struct stat *)arg1 filePath:(id)arg2;
- (id)_databaseFileURLForFolder:(id)arg1;
- (id)_databaseFolderForWorkspace:(id)arg1;
- (BOOL)_reopenDatabaseWithRemoval:(BOOL)arg1;
- (BOOL)_createDatabaseFolder;
- (void)_setupObservers;
- (id)allAutoImportItemsMatchingKind:(id)arg1 symbolLanguage:(id)arg2;
- (id)allAutoImportItemsMatchingKind:(id)arg1;
- (id)filesWithSymbolOccurrencesMatchingName:(id)arg1 kind:(id)arg2;
- (id)classesWithReferencesToSymbols:(id)arg1;
- (id)allClassesWithMembers:(id)arg1;
- (id)classesWithMembers:(id)arg1;
- (id)allMethodsMatchingMethod:(id)arg1 forReceiver:(id)arg2;
- (id)membersMatchingName:(id)arg1 kinds:(id)arg2 forInterfaces:(id)arg3;
- (id)membersMatchingKinds:(id)arg1 forInterfaces:(id)arg2;
- (id)symbolsForResolutions:(id)arg1;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)codeCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 completionContext:(id *)arg3;
- (id)allParentsOfSymbols:(id)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)topLevelSymbolsInFile:(id)arg1;
- (unsigned long long)countOfSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 cancelWhen:(CDUnknownBlockType)arg3;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2;
- (id)allSymbolsMatchingKind:(id)arg1;
- (id)testMethodsForClasses:(id)arg1;
- (id)testCaseBaseClasses;
- (id)allSubClassesForClasses:(id)arg1;
- (id)allSymbolsMatchingNames:(id)arg1 kind:(id)arg2;
- (id)allSymbolsMatchingName:(id)arg1 kind:(id)arg2;
- (id)allProtocolsMatchingName:(id)arg1;
- (id)allClassesMatchingName:(id)arg1;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)collectionElementTypeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)referencesToSymbol:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)symbolsUsedInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5;
- (id)topLevelProtocolsWorkspaceOnly:(BOOL)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)topLevelProtocolsWorkspaceOnly:(BOOL)arg1;
- (id)topLevelProtocols;
- (id)topLevelClassesWorkspaceOnly:(BOOL)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)topLevelClassesWorkspaceOnly:(BOOL)arg1;
- (id)topLevelClasses;
- (id)filesContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6;
- (id)filesIncludedByFile:(id)arg1;
- (id)filesIncludingFile:(id)arg1;
- (id)mainFileForSelectionFilePath:(id)arg1 buildSettings:(id *)arg2;
- (id)objCOrCCompilationUnitIndexablesForMainFile:(id)arg1 indexableObjects:(id)arg2;
- (BOOL)isFileObjCCompilationUnitOrHeader:(id)arg1 error:(id *)arg2;
- (id)_localizedPhraseForDependentObjCCompilationUnit:(id)arg1 errorLanguages:(id)arg2 sharedLanguageIdentifier:(id)arg3 sharedIndexableObject:(id)arg4;
- (id)_localizedDescriptionForObjCCompilationUnit:(id)arg1 errorLanguages:(id)arg2;
- (BOOL)_errorLanguages:(id *)arg1 forFilePath:(id)arg2 indexableObjects:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end