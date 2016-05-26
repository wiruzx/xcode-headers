//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTDraggingContext : NSObject <DTDraggingInfo>
{
    NSWindow *draggingDestinationWindow;
    struct CGPoint draggingLocation;
    struct CGPoint draggedImageLocation;
    NSImage *draggedImage;
    NSPasteboard *draggingPasteboard;
    id draggingSource;
    NSDictionary *draggingSourceContext;
    long long draggingSequenceNumber;
    long long draggingSourceOperationMask;
    DTDraggedImageState *draggedImageState;
    struct CGSize draggingStickiness;
    BOOL draggedImageStateNeedsUpdate;
    long long draggingFormation;
    BOOL animatesToDestination;
    long long numberOfValidItemsForDrop;
}

@property long long numberOfValidItemsForDrop; // @synthesize numberOfValidItemsForDrop;
@property BOOL animatesToDestination; // @synthesize animatesToDestination;
@property long long draggingFormation; // @synthesize draggingFormation;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (struct CGPoint)draggingLocationOnScreen;
- (void)setDraggedImageStateNeedsUpdate:(BOOL)arg1;
- (BOOL)draggedImageStateNeedsUpdate;
- (struct CGSize)draggingStickiness;
- (void)setDraggingStickiness:(struct CGSize)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
- (long long)draggingSequenceNumber;
- (id)draggingSourceContext;
- (void)setDraggingSourceContext:(id)arg1;
- (void)setDraggingSequenceNumber:(long long)arg1;
- (id)draggingSource;
- (id)draggingPasteboard;
- (id)draggedImage;
- (void)setDraggedImage:(id)arg1;
- (struct CGPoint)draggedImageLocation;
- (void)setDraggedImageLocation:(struct CGPoint)arg1;
- (struct CGPoint)draggingLocation;
- (void)setDraggingLocation:(struct CGPoint)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (void)setDraggingDestinationWindow:(id)arg1;
- (id)draggingDestinationWindow;
- (void)setDraggedImageState:(id)arg1;
- (id)draggedImageState;
- (void)dealloc;
- (id)initWithSource:(id)arg1 andPasteboard:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) long long springLoadingHighlight;
@property(readonly) Class superclass;

@end