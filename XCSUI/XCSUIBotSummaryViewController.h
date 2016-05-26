//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIBotSummaryViewController : DVTViewController <XCSUIStackedBarChartViewControllerDataSource, XCSUIStackedBarChartViewControllerDelegate, NSPopoverDelegate, XCSBotSupportingEditorHostedViewController>
{
    XCSUIIntegrationHistoryViewController *_integrationHistoryViewController;
    XCSUIStackedBarChartViewController *_issueHistoryViewController;
    XCSUIStackedBarChartViewController *_unitTestHistoryViewController;
    XCSUIStackedBarChartViewController *_codeCoverageHistoryViewController;
    XCSUIStackedBarChartBar *_warningsBar;
    XCSUIStackedBarChartBar *_issuesBar;
    XCSUIStackedBarChartBar *_errorsBar;
    XCSUIStackedBarChartBar *_successBar;
    XCSUIStackedBarChartBar *_failureBar;
    XCSUIStackedBarChartBar *_codeCoverageBar;
    NSArray *_integrations;
    NSPopover *_graphPopover;
    DVTObservingToken *_botsObserver;
    XCSUIReflightRequiredViewController *_reflightViewController;
    XCSUIInsetHorizontalDividerLine *_statusLineHistoryDividerLine;
    XCUIBotSummaryViewDataSource *_summaryViewDataSource;
    XCSBotSupportingEditor *_botSupportingEditor;
    NSArray *_currentSelectedDocumentLocations;
    XCSIntegration *_integration;
    XCSBot *_bot;
    NSString *_botName;
    NSString *_botDescription;
    NSString *_schemeName;
    NSString *_testingDevicesSummary;
    NSString *_scheduleSummary;
    NSString *_repositoriesSummary;
    DVTReplacementView *_statusReplacementView;
    DVTStackView_ML *_stackView;
    NSScrollView *_scrollView;
    DVTReplacementView *_reflightReplacementView;
    XCSUIProgressReplacementView *_progressReplacementView;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property __weak XCSUIProgressReplacementView *progressReplacementView; // @synthesize progressReplacementView=_progressReplacementView;
@property __weak DVTReplacementView *reflightReplacementView; // @synthesize reflightReplacementView=_reflightReplacementView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property __weak DVTReplacementView *statusReplacementView; // @synthesize statusReplacementView=_statusReplacementView;
@property(readonly, copy) NSString *repositoriesSummary; // @synthesize repositoriesSummary=_repositoriesSummary;
@property(readonly, copy) NSString *scheduleSummary; // @synthesize scheduleSummary=_scheduleSummary;
@property(readonly, copy) NSString *testingDevicesSummary; // @synthesize testingDevicesSummary=_testingDevicesSummary;
@property(readonly, copy) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(readonly, copy) NSString *botDescription; // @synthesize botDescription=_botDescription;
@property(readonly, copy) NSString *botName; // @synthesize botName=_botName;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_showPopoverForIntegration:(id)arg1 event:(id)arg2 resultSummary:(id)arg3 graphColumn:(id)arg4 graphController:(id)arg5;
- (void)stackedBarChartViewController:(id)arg1 userClickedOnGraphColumn:(id)arg2 event:(id)arg3;
- (void)stackedBarChartViewController:(id)arg1 userMouseExitedGraph:(id)arg2 event:(id)arg3;
- (void)stackedBarChartViewController:(id)arg1 userMousedOverGraphColumn:(id)arg2 event:(id)arg3;
- (id)stackedBarChartViewController:(id)arg1 getIntegrationIdForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 isTestingEnabledForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 codeCoveragePercentageDeltaForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 codeCoveragePercentageForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 codeCoveragePreferenceForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 labelForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfFailedTestsForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfPassedTestsForColumn:(unsigned long long)arg2;
- (unsigned long long)stackedBarChartViewController:(id)arg1 countOfTestsForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationGenerateWarningsOrIssuesForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationFailWithBuildErrorsForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didIntegrationTriggerFailForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 isBotCanceledForIntegrationForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 didBotFailForIntegrationForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 isRunningIntegrationForColumn:(unsigned long long)arg2;
- (BOOL)stackedBarChartViewController:(id)arg1 isPendingIntegrationForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 buildResultSummaryForColumn:(unsigned long long)arg2;
- (id)stackedBarChartViewController:(id)arg1 valueForStackedBarChartBar:(id)arg2 column:(unsigned long long)arg3;
- (unsigned long long)numberOfColumnsInStackedBarChartViewController:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, copy) NSArray *currentSelectedItems;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
- (id)statusViewController;
- (void)refreshUIWithIntegrations:(id)arg1 isCodeCoverageAPIAvailable:(long long)arg2;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)windowDidEndResize:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end