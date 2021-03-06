//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIBotLogScopeBar : DVTViewController <DVTScopeBarContentController>
{
    DVTScopeBarButton *_scopeAllMessagesButton;
    DVTScopeBarButton *_scopeAllIssuesButton;
    DVTScopeBarButton *_scopeErrorsOnlyButton;
    DVTSearchField *_scopeSearchField;
    NSView *_downloadAllLogsContainerView;
    NSView *_downloadAllLogsButtonView;
    NSView *_downloadAllLogsProgressView;
    NSButton *_downloadAllLogsButton;
    NSProgressIndicator *_downloadAllLogsProgressIndicator;
    id <XCSUIBotLogEditorScopeBarDelegate> _delegate;
    NSString *_currentLogDownloadToken;
    NSPopUpButton *_logSelectorPopUp;
    DVTScopeBarButton *_allMessagesScopeButton;
    DVTScopeBarButton *_allIssuesScopeButton;
    DVTScopeBarButton *_errorsOnlyScopeButton;
}

+ (id)defaultViewNibName;
@property __weak DVTScopeBarButton *errorsOnlyScopeButton; // @synthesize errorsOnlyScopeButton=_errorsOnlyScopeButton;
@property __weak DVTScopeBarButton *allIssuesScopeButton; // @synthesize allIssuesScopeButton=_allIssuesScopeButton;
@property __weak DVTScopeBarButton *allMessagesScopeButton; // @synthesize allMessagesScopeButton=_allMessagesScopeButton;
@property __weak NSPopUpButton *logSelectorPopUp; // @synthesize logSelectorPopUp=_logSelectorPopUp;
@property(retain) id <XCSUIBotLogEditorScopeBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchFieldAction:(id)arg1;
- (void)showDownloadAllLogsProgress;
- (void)showDownloadAllLogsButton;
- (void)cancelLogDownloading:(id)arg1;
- (void)downloadAllLogs:(id)arg1;
- (void)showErrorsOnly:(id)arg1;
- (void)showAllIssues:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)setScopeBarState:(int)arg1 showAllResults:(BOOL)arg2;
@property(readonly) double preferredViewHeight;
- (void)loadView;
- (void)showBuildLogScopeButtons:(BOOL)arg1;
- (void)_updateShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end