//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSEvent (DVTNSEventAdditions)
- (BOOL)dvt_isDoubleClick;
- (struct CGPoint)dvt_locationInWindowRelativeToView:(id)arg1;
- (BOOL)dvt_isLeftMouseButtonUp;
- (BOOL)dvt_isLeftMouseButtonDown;
- (struct CGPoint)dvt_flooredLocationInWindow;
- (struct CGPoint)dvt_flooredLocationInView:(id)arg1;
- (BOOL)dvt_isDragEventAnIntentialLeftDragWithRespectToMouseDown:(id)arg1;
- (BOOL)dvt_isOptionalRevealGesture;
- (BOOL)dvt_isRevealGesture;
- (BOOL)dvt_isControlKeyDown;
- (BOOL)dvt_isCommandKeyDown;
- (BOOL)dvt_isShiftKeyDown;
- (BOOL)dvt_isOptionKeyDown;
- (BOOL)dvt_isEscapeKeyDown;
- (struct CGPoint)dvt_locationOnScreen;
- (struct CGPoint)dvt_locationInWindow:(id)arg1;
- (struct CGPoint)dvt_locationInView:(id)arg1;
@end