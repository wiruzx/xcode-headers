//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelineMouseEventsResponder : NSResponder <DTTimelineMouseStateValidatorDelegate>
{
    DTTimelineGraph *_timelineGraph;
    DTTimelineMouseStateValidator *_mouseStateValidator;
    NSTrackingArea *_trackingArea;
    double _filterStartX;
    double _filterEndX;
    double _zoomIndicatorStartX;
    long long _magnifyGestureCenter;
    BOOL _mouseDraggedSinceMouseDown;
    BOOL _delegateSupportsInspectionCB;
    NSEvent *_mouseDownEvent;
    DTTimelinePlane *_resizingPlane;
    NSTimer *_longPressTimer;
    id <DTTimelineGraphDelegate> _delegate;
}

@property(nonatomic) __weak id <DTTimelineGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dragInspectionPointEvent:(id)arg1;
- (void)_endLongPressDragAtEvent:(id)arg1;
- (void)_longPressDragToEvent:(id)arg1;
- (BOOL)_startLongPressDragAtEvent:(id)arg1;
- (void)_resizePlane:(id)arg1 event:(id)arg2;
- (void)_zoomOutBasedOnZoomIndicator;
- (void)_zoomInToZoomIndicator;
- (void)_cancelZoom;
- (void)_displayZoomIndicatorFrom:(double)arg1 to:(double)arg2;
- (void)_setRangeIndicatorState:(unsigned long long)arg1;
- (void)_clickFromEvent:(id)arg1;
- (void)_magnifyBy:(double)arg1;
- (void)_finishFiltering;
- (void)_applyFilterFrom:(double)arg1 to:(double)arg2;
- (void)_clearInspectionInfo;
- (void)_displayInspectionInfoForEvent:(id)arg1;
- (void)_moveVerticalScrollerByY:(double)arg1;
- (void)_moveHorizontalScrollerByX:(double)arg1;
- (void)_moveByY:(double)arg1;
- (void)_moveByX:(double)arg1;
- (BOOL)_mouseIsOverDisclosureTriangle:(id)arg1 groupPlane:(out id *)arg2;
- (BOOL)_mouseIsOverResizablePlaneBorder:(id)arg1;
- (id)_planeToResizeForEvent:(id)arg1;
- (BOOL)_mouseIsOverFilterEnd:(id)arg1;
- (BOOL)_mouseIsOverFilterStart:(id)arg1;
- (BOOL)_mouseIsInLabelOverlayArea:(id)arg1;
- (BOOL)_mouseIsInBottomPinnedPlane:(id)arg1;
- (BOOL)_mouseIsInRuler:(id)arg1;
- (BOOL)_mouseIsInHoverArea:(id)arg1;
- (BOOL)_mouseIsOverGraph:(id)arg1;
- (void)_updateFilterStateFromTimeline;
- (long long)_maxOffset;
- (double)_rulerHeight;
- (long long)_rationalizeSelectionOffset:(long long)arg1;
- (double)_localYFromEvent:(id)arg1;
- (double)_localXFromEvent:(id)arg1;
- (struct CGPoint)_localPointFromEvent:(id)arg1;
- (BOOL)_controlKeyPressed;
- (BOOL)_shiftKeyPressed;
- (BOOL)_optionKeyPressed;
- (void)_fireLongPressTimer:(id)arg1;
- (void)_cancelLongPressTimer;
- (void)_startLongPressTimerWithEvent:(id)arg1;
- (void)_mouseDragTransitionToState:(unsigned long long)arg1 event:(id)arg2;
- (void)_setIdleStateBasedOnEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)mouseStateValidator:(id)arg1 didTransistionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 event:(id)arg4;
- (void)_assertOrLogInvalidStateInEvent:(id)arg1;
- (void)selectedTimeRangeChanged;
- (id)initWithTimelineGraph:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end