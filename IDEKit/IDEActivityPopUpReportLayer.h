//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEActivityPopUpReportLayer : CALayer <DVTInvalidation>
{
    IDEActivityProgressIndicatorLayer *_progressIndicatorLayer;
    IDEActivityScrollingTextLayer *_scrollingTextLayer;
    IDEActivityActionButtonLayer *_cancelButtonLayer;
    NSMutableArray *_stringSegments;
    BOOL _paused;
    DVTObservingToken *_kvoActivityReportTitleSegmentsToken;
    DVTObservingToken *_kvoActivityReportProgressToken;
    DVTObservingToken *_kvoActivityReportTitleToken;
    DVTObservingToken *_kvoActivityReportThrottleFactorToken;
    BOOL _isActiveWindowStyle;
    BOOL _makeSpaceForIndeterminateProgressIndicator;
    IDEActivityReport *_activityReport;
    double _spaceNeededForMultiActionIndicator;
}

+ (id)createActivityReportLayer;
+ (struct CGSize)defaultSizeForPopUpStyle;
+ (void)initialize;
@property(nonatomic) BOOL makeSpaceForIndeterminateProgressIndicator; // @synthesize makeSpaceForIndeterminateProgressIndicator=_makeSpaceForIndeterminateProgressIndicator;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(nonatomic) BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
@property(retain, nonatomic) IDEActivityReport *activityReport; // @synthesize activityReport=_activityReport;
- (void).cxx_destruct;
- (double)spaceNeededForCancelButtonLayer;
- (BOOL)shouldShowCancelButtonLayer;
@property(readonly) BOOL indeterminateReportInProgress;
- (id)keyPathsForValuesAffectingIndeterminateReportInProgress;
- (void)updateVisibilityForCancelButtonAndAdjustLayoutIfNeeded;
- (void)updateVisibilityForTextFieldAndAdjustLayoutIfNeeded;
- (BOOL)shouldHideProgress;
- (void)startObservingActivityReport;
- (void)stopObservingActivityReport;
- (void)updateScrollingTextFieldStringValue;
- (void)_updateStringSegments:(id)arg1;
- (id)_pausedAttributes;
- (id)defaultIdleActionString;
- (id)nonFailedBuildTextAttributes;
- (id)defaultIdleTitle;
- (id)defaultReportTitle;
- (id)defaultCompletionSummary;
- (void)sizeToFit;
- (struct CGPoint)imageLayerPosition;
- (void)updateConstraints;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end