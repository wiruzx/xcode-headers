//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETestReportPerfMetricBadgePopoverViewController : NSViewController <NSTextFieldDelegate, IDETestsInTestableObserver>
{
    id <IDETestable> _testable;
    NSAttributedString *_baselineValueBeforeEditing;
    NSAttributedString *_rstdValueBeforeEditing;
    id <IDETestReport_PerfMetric> _testPerfMetric;
    id <IDETestReport_TestRun> _testRun;
    NSWindow *_hostWindow;
    CDUnknownBlockType _updateBaselineCallback;
    NSString *_testIdentifier;
    NSTextField *_metricNameTextField;
    NSTextField *_metricLabelTextField;
    NSTextField *_resultValueTextField;
    NSTextField *_resultLabelTextField;
    NSTextField *_baselineAverageValueTextField;
    NSTextField *_baselineLabelTextField;
    NSTextField *_stdDevValueTextField;
    NSTextField *_stdDevLabelTextField;
    NSTextField *_averageValueTextField;
    NSTextField *_averageLabelTextField;
    IDETestReportPerfMetricIterationsGraphView *_graphView;
    NSView *_iterationsHostView;
    NSButton *_saveButton;
    NSButton *_cancelButton;
    NSButton *_editButton;
    NSButton *_acceptButton;
    NSButton *_setBaselineButton;
    NSButton *_jumpToReportButton;
}

@property __weak NSButton *jumpToReportButton; // @synthesize jumpToReportButton=_jumpToReportButton;
@property __weak NSButton *setBaselineButton; // @synthesize setBaselineButton=_setBaselineButton;
@property __weak NSButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property __weak NSButton *editButton; // @synthesize editButton=_editButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain) NSView *iterationsHostView; // @synthesize iterationsHostView=_iterationsHostView;
@property __weak IDETestReportPerfMetricIterationsGraphView *graphView; // @synthesize graphView=_graphView;
@property __weak NSTextField *averageLabelTextField; // @synthesize averageLabelTextField=_averageLabelTextField;
@property __weak NSTextField *averageValueTextField; // @synthesize averageValueTextField=_averageValueTextField;
@property __weak NSTextField *stdDevLabelTextField; // @synthesize stdDevLabelTextField=_stdDevLabelTextField;
@property __weak NSTextField *stdDevValueTextField; // @synthesize stdDevValueTextField=_stdDevValueTextField;
@property __weak NSTextField *baselineLabelTextField; // @synthesize baselineLabelTextField=_baselineLabelTextField;
@property __weak NSTextField *baselineAverageValueTextField; // @synthesize baselineAverageValueTextField=_baselineAverageValueTextField;
@property __weak NSTextField *resultLabelTextField; // @synthesize resultLabelTextField=_resultLabelTextField;
@property __weak NSTextField *resultValueTextField; // @synthesize resultValueTextField=_resultValueTextField;
@property __weak NSTextField *metricLabelTextField; // @synthesize metricLabelTextField=_metricLabelTextField;
@property __weak NSTextField *metricNameTextField; // @synthesize metricNameTextField=_metricNameTextField;
@property(copy, nonatomic) NSString *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
@property(copy, nonatomic) CDUnknownBlockType updateBaselineCallback; // @synthesize updateBaselineCallback=_updateBaselineCallback;
@property(retain, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain, nonatomic) id <IDETestReport_PerfMetric> testPerfMetric; // @synthesize testPerfMetric=_testPerfMetric;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)valueAttributedString:(id)arg1 color:(id)arg2;
- (void)setUpdatedRSTDForTest:(double)arg1;
- (id)updatedRSTDForTest;
- (void)setUpdatedBaselineValueForTest:(double)arg1;
- (id)updatedBaselineValueForTest;
- (id)abbreviatedUnitFromUnit:(id)arg1;
- (void)updateBaselineAction:(id)arg1;
- (void)_updateBaseline:(double)arg1;
- (void)accept:(id)arg1;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)edit:(id)arg1;
- (void)setBaseline:(id)arg1;
- (void)testablesChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)jumpToReport:(id)arg1;
- (void)suppressJumpToReportButton;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end