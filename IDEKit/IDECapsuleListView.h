//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECapsuleListView : DVTStackView_ML <NSDraggingSource, DVTStatefulObject, DVTInvalidation>
{
    IDECapsuleView *_draggedView;
    id <IDECapsuleListViewDataSource> _dataSource;
    long long _dragDestinationIndex;
    NSTimer *_autoscrollTimer;
    NSColor *_backgroundColor;
    NSString *_emptyContentString;
    DVTStateToken *_stateToken;
    long long _selectedIndex;
    id _lastFirstResponder;
    NSMutableSet *_subviewFrameChangedObservers;
    BOOL _reloadAfterDrag;
    BOOL _restoringState;
    BOOL _togglingDisclosure;
    struct {
        unsigned int numberOfObjectsInCapsuleListView:1;
        unsigned int viewControllerForRow:1;
        unsigned int acceptDrop:1;
        unsigned int validateDrop:1;
        unsigned int pastboardTypesForRowWithIndex:1;
        unsigned int didCollapse:1;
        unsigned int didExpand:1;
        unsigned int didCompleteLayout:1;
    } _dataSourceRespondsTo;
    BOOL _highlightingEnabled;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)_subviewTopShadow;
+ (id)_subviewBottomShadow;
+ (void)initialize;
@property(nonatomic) BOOL highlightingEnabled; // @synthesize highlightingEnabled=_highlightingEnabled;
@property long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) id <IDECapsuleListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_setDisclosedIndexes:(id)arg1;
- (id)_disclosedIndexes;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)_shouldFillEnclosingView;
- (BOOL)_dataSourceSupportsDragAndDrop;
- (struct CGPoint)_swapThresholdForViewRect:(struct CGRect)arg1 draggingDown:(BOOL)arg2;
- (id)_frameRectsOfRearrangedSubviews;
- (id)_rearrangedSubviewsWhileDragging;
@property(readonly) BOOL _isDragging;
- (BOOL)_isAnimatingSubview:(id)arg1;
- (BOOL)_isAnimationInProgress;
- (BOOL)_shouldAnimateLayout;
- (id)_animationForSubview:(id)arg1;
- (unsigned long long)_validateDropAtIndex:(long long)arg1 sender:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_addBlockViewController:(id)arg1;
- (void)_subviewFrameChanged:(id)arg1;
- (void)_reloadSubviews;
- (void)capsuleViewToggledSelection:(id)arg1;
- (void)_updateSelectedIndex;
- (BOOL)_isMouseInCurrentEventOverSelf;
- (void)capsuleViewToggledDisclosure:(id)arg1;
- (void)scrollCapsuleViewToVisible:(id)arg1;
- (void)scrollRowToVisible:(long long)arg1;
- (id)capsuleViews;
- (long long)numberOfRows;
- (void)hightlightCapsuleView:(id)arg1;
- (id)capsuleViewForCapsuleViewController:(id)arg1;
- (void)startEditingCapsuleTitleAtRow:(long long)arg1;
- (long long)rowForCapsuleView:(id)arg1;
- (id)capsuleViewAtRow:(long long)arg1;
- (void)didCompleteLayout;
- (void)reloadData;
- (void)layoutBottomUp;
- (void)_layoutBottomUpWithAnimation:(BOOL)arg1;
- (struct CGSize)sizeForPulledStackMagnitude:(double)arg1;
- (struct CGPoint)pushedOriginForSubview:(id)arg1 position:(double)arg2;
- (struct CGSize)pushedSizeForSubview:(id)arg1;
- (double)pulledSizeMagnitudeForSubview:(id)arg1;
- (BOOL)isTopToBottom;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)ignoreModifierKeysWhileDragging;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)mouseUp:(id)arg1;
- (void)_autoscrollTimerCallback:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (void)primitiveInvalidate;
- (void)_invalidateSubviewsSavingStateWithMap:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end