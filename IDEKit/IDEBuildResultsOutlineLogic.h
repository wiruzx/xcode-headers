//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEBuildResultsOutlineLogic : NSObject <DVTInvalidation>
{
    id <IDEBuildResultsOutlineDelegate> _buildResultsOutlineDelegate;
    IDEActivityLogSection *_activityLog;
    id <DVTCancellable> _activityLogObserver;
    XCBuildResultsOutlineView *_outline;
    XCBuildResultsOutlineView *_outlineIssues;
    XCBuildResultsOutlineView *_activeOutline;
    IDEConfigurableDataSource *_dataSource;
    IDEConfigurableDataSource *_dataSourceIssues;
    BOOL _showSteps;
    BOOL _showWarnings;
    BOOL _showErrors;
    BOOL _showTestFailures;
    BOOL _showAnalyzerResults;
    BOOL _showAllResults;
    BOOL _startNotificationWasReceived;
    BOOL _stopNotificationWasReceived;
    BOOL _expandingWhileBuilding;
    BOOL _performScrollToEnd;
    XCBuildResultAdapter *_genericLogItemAdapter;
    XCBuildResultAdapter *_sectionAdapter;
    XCBuildResultAdapter *_targetHeadingAdapter;
    XCBuildResultAdapter *_invocationAdapter;
    XCBuildResultAdapter *_errorAdapter;
    XCBuildResultAdapter *_testFailureAdapter;
    XCBuildResultAdapter *_warningAdapter;
    XCBuildResultAdapter *_analyzerWarningAdapter;
    XCBuildResultAdapter *_analyzerResultAdapter;
    XCBuildResultAdapter *_analyzerStepAdapter;
    XCBuildResultAdapter *_analyzerControlFlowStepAdapter;
    XCBuildResultAdapter *_analyzerEventStepAdapter;
    XCBuildResultAdapter *_unitTestAdapter;
    XCBuildResultAdapter *_headerInclusionAdapter;
    XCBuildResultAdapter *_noticeAdapter;
    XCBuildResultAdapter *_summaryItemAdapter;
    XCBuildResultAdapter *_issueCategoryAdapter;
    XCBuildResultAdapter *_issueOccurrenceAdapter;
    XCBuildResultAdapter *_issueOccurrenceSubStepAdapter;
    NSMapTable *_textLayoutsGenerationA;
    NSMapTable *_textLayoutsGenerationB;
    NSMutableDictionary *_issueCategoryNodes;
    NSString *_searchFieldValue;
}

+ (id)markerForOtherCategory;
+ (BOOL)isUnitTestSection:(id)arg1;
+ (BOOL)isContextInfoMessage:(id)arg1;
+ (BOOL)isHeaderInclusionMessage:(id)arg1;
+ (BOOL)isAnalyzerWarningMessage:(id)arg1;
+ (BOOL)isAnalyzerEventStepMessage:(id)arg1;
+ (BOOL)isAnalyzerControlFlowStepMessage:(id)arg1;
+ (BOOL)isAnalyzerStepMessage:(id)arg1;
+ (BOOL)isAnalyzerResultMessage:(id)arg1;
+ (BOOL)isNoticeMessage:(id)arg1;
+ (BOOL)isWarningMessage:(id)arg1;
+ (BOOL)isErrorMessage:(id)arg1;
+ (BOOL)isTestFailureMessage:(id)arg1;
+ (BOOL)isCommandInvocationSection:(id)arg1;
+ (BOOL)isMainGroupSection:(id)arg1;
+ (id)formattedLogTranscript:(id)arg1;
+ (id)formattedLogStringForLogMessage:(id)arg1;
+ (id)formattedLogStringForSection:(id)arg1;
+ (id)boldAttributesForTranscript;
+ (id)attributesForTranscript;
+ (id)standardMonoSpaceFont;
+ (id)attributedTranscriptForLogSection:(id)arg1 commandDetailLengthPtr:(unsigned long long *)arg2;
+ (id)_commandInvocationStringForLogSection:(id)arg1;
+ (id)tooltipForLogMessage:(id)arg1;
+ (id)lessUnderlinedWhiteImage;
+ (id)lessWhiteImage;
+ (id)moreUnderlinedWhiteImage;
+ (id)moreWhiteImage;
+ (id)lessUnderlinedImage;
+ (id)lessImage;
+ (id)moreUnderlinedImage;
+ (id)moreImage;
+ (id)newImageWithTitle:(id)arg1 selected:(BOOL)arg2 underlined:(BOOL)arg3;
+ (id)condensedOverImage;
+ (id)condensedDownImage;
+ (id)condensedUpImage;
+ (id)expandedOverImage;
+ (id)expandedDownImage;
+ (id)expandedUpImage;
+ (id)buildFileInProgressIconImage;
+ (id)buildFileErrorsIconImage;
+ (id)buildFileWarningsIconImage;
+ (id)buildFileAnalyzerResultsIconImage;
+ (id)buildFileWithIssuesIconImage;
+ (id)buildFileSuccessIconImage;
+ (id)fixItErrorIconImage;
+ (id)fixItWarningIconImage;
+ (id)testFailureIconImage;
+ (id)testSuccessIconImage;
+ (id)errorIconImage;
+ (id)warningIconImage;
+ (id)analyzerControlFlowStepIconImage;
+ (id)analyzerStepIconImage;
+ (id)analyzerEventStepIconImage;
+ (id)analyzerResultIconImage;
+ (id)analyzerWarningIconImage;
+ (id)noticeIconImage;
+ (id)imageNamed:(id)arg1;
+ (id)sharedTextLayout;
+ (void)initialize;
@property(readonly, nonatomic) id <IDEBuildResultsOutlineDelegate> buildResultsOutlineDelegate; // @synthesize buildResultsOutlineDelegate=_buildResultsOutlineDelegate;
@property(copy, nonatomic) NSString *searchFieldValue; // @synthesize searchFieldValue=_searchFieldValue;
@property(readonly, nonatomic) BOOL showAllResults; // @synthesize showAllResults=_showAllResults;
@property(readonly, nonatomic) BOOL showAnalyzerResults; // @synthesize showAnalyzerResults=_showAnalyzerResults;
@property(readonly, nonatomic) BOOL showTestFailures; // @synthesize showTestFailures=_showTestFailures;
@property(readonly, nonatomic) BOOL showErrors; // @synthesize showErrors=_showErrors;
@property(readonly, nonatomic) BOOL showWarnings; // @synthesize showWarnings=_showWarnings;
@property(readonly, nonatomic) BOOL showSteps; // @synthesize showSteps=_showSteps;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 outlineView:(id)arg2 outlineIssuesView:(id)arg3;
- (void)primitiveInvalidate;
- (void)selectMessage:(id)arg1 withinDataNode:(id)arg2;
- (void)selectMessageOrSection:(id)arg1 usingTranscript:(BOOL)arg2;
- (void)_delayedHighLightMessage:(id)arg1;
- (void)showFindIndicatorInSection:(id)arg1 withTranscriptTextRange:(struct _NSRange)arg2;
- (void)selectSection:(id)arg1 withTranscriptTextRange:(struct _NSRange)arg2;
- (void)selectMessageOrSection:(id)arg1;
- (BOOL)startingWithTextView:(id)arg1 findText:(id)arg2 ignoreCase:(BOOL)arg3 matchStyle:(long long)arg4 backwards:(BOOL)arg5 wrap:(BOOL)arg6;
- (id)transcriptAttributedStringForDataNode:(id)arg1;
- (void)updateSearchFieldValue:(id)arg1;
- (void)copyShownTranscripts:(id)arg1;
- (void)copyTranscriptToNewTextFile:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)attributedLogStringForItems:(id)arg1 inOutlineView:(id)arg2;
- (id)dataSource:(id)arg1 contextMenuForSelectedNodes:(id)arg2;
- (id)mentuItemTitleForCopyShownTranscripts;
- (id)localizedStringFor:(id)arg1 explanation:(id)arg2;
- (BOOL)dataSource:(id)arg1 filterDisplayedRootNode:(id)arg2;
- (void)jumpToSelection:(id)arg1;
- (BOOL)selectionContainsTranscripts;
- (void)collapseAllTranscripts:(id)arg1;
- (void)expandAllTranscripts:(id)arg1;
- (void)expandSelectedTranscripts:(BOOL)arg1;
- (void)expandTranscripts:(BOOL)arg1 nodes:(id)arg2;
- (void)_recursiveSetTextExpanded:(BOOL)arg1 inDataNode:(id)arg2;
- (void)_scrollToEnd:(id)arg1;
- (void)_recursiveReplaceAdapter:(id)arg1 with:(id)arg2 inDataNode:(id)arg3;
- (void)_updateRootsByIssues;
- (void)updateByIssueView:(id)arg1;
- (void)_updateIssuesForSection:(id)arg1 nodesToExpand:(id)arg2;
- (void)_updateIssuesForMessage:(id)arg1 nodesToExpand:(id)arg2;
- (id)nodeForIssueItem:(id)arg1;
- (id)categoryForItem:(id)arg1;
- (void)completeActivityLog;
- (void)testComputeCounts;
- (void)setExpandingWhileBuilding:(BOOL)arg1;
- (BOOL)expandingWhileBuilding;
- (void)buildOperationDidUpdateBuildLogItems:(id)arg1;
- (void)updateByStepView:(id)arg1;
- (id)textLayoutForDataNode:(id)arg1;
- (void)buildOperationDidUpdateBuildLogItems_addingChildrenInsteadOfReloading_Radar6707952:(id)arg1;
- (void)buildOperationDidUpdateBuildLogItems_addingChildrenInsteadOfReloading:(id)arg1;
- (id)nodeForLogItem:(id)arg1;
- (void)displayActivityLog:(id)arg1;
- (void)noteActiveViewDidChangeTo:(id)arg1;
- (void)setShowAllResults:(BOOL)arg1;
- (void)setShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showTestFailures:(BOOL)arg4 showAnalyzerResults:(BOOL)arg5;
- (void)_restoreConfigurationForCurrentOutlineView;
- (void)_saveConfigurationForCurrentOutlineView;
- (void)_rebuildOutline;
- (void)_updateCounts;
- (void)_updateRoots;
- (BOOL)shouldDisplaySummary;
- (void)_expandSubcommandNodesForNode:(id)arg1;
- (void)_recursivelyExpandUnitTestNodesWithImportantMessagesForNode:(id)arg1;
- (id)activityLog;
- (void)scrollToEndOfOutline;
- (BOOL)shouldScrollToEndOfOutline;
- (void)scrollToEndOfOutlineView:(id)arg1;
- (BOOL)shouldScrollToEndOfOutlineView:(id)arg1;
- (BOOL)alwaysShowTargetInfo;
- (void)_configure;
- (id)_configureOutline:(id)arg1;
- (void)outlineIssuesSelectionChanged;
- (void)outlineSelectionChanged;
- (id)indexPathsForNodes:(id)arg1;
- (BOOL)filterLogItem:(id)arg1;
- (BOOL)filterLogMessage:(id)arg1;
- (BOOL)filterLogMessageSansSubitems:(id)arg1;
- (BOOL)filterLogSection:(id)arg1;
- (BOOL)logMessageHasFilteredSubItems:(id)arg1;
- (BOOL)logSectionHasFilteredSubItems:(id)arg1;
- (BOOL)iterateCountingOverSection:(id)arg1 errorCountPtr:(unsigned long long *)arg2 testFailureCountPtr:(unsigned long long *)arg3 warningCountPtr:(unsigned long long *)arg4 analyzerCountPtr:(unsigned long long *)arg5 stopOnError:(BOOL)arg6 stopOnTestFailure:(BOOL)arg7 stopOnWarning:(BOOL)arg8 stopOnAnalyzer:(BOOL)arg9;
- (id)issueOccurrenceSubStepAdapter;
- (id)issueOccurrenceAdapter;
- (id)issueCategoryAdapter;
- (id)summaryItemAdapter;
- (id)noticeAdapter;
- (id)unitTestAdapter;
- (id)headerInclusionAdapter;
- (id)analyzerEventStepAdapter;
- (id)analyzerControlFlowStepAdapter;
- (id)analyzerStepAdapter;
- (id)analyzerResultAdapter;
- (id)analyzerWarningAdapter;
- (id)warningAdapter;
- (id)testFailureAdapter;
- (id)errorAdapter;
- (id)invocationAdapter;
- (id)sectionAdapter;
- (id)targetHeadingAdapter;
- (id)genericLogItemAdapter;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end