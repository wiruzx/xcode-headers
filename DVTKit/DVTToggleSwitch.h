//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTToggleSwitch : NSView
{
    id _accessibilityDisplayOptionObserver;
    BOOL _on;
    BOOL _enabled;
    BOOL _canDrag;
    BOOL _dragging;
    id _target;
    SEL _action;
    CDUnknownBlockType _onDidChangeBlock;
    CALayer *_rootLayer;
    CALayer *_knobBorderLayer;
    CALayer *_maskLayer;
    CALayer *_trackLayer;
    struct CGPoint _lastDragLocation;
}

@property(nonatomic) struct CGPoint lastDragLocation; // @synthesize lastDragLocation=_lastDragLocation;
@property(nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property(nonatomic) BOOL canDrag; // @synthesize canDrag=_canDrag;
@property(readonly, nonatomic) CALayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(readonly, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(readonly, nonatomic) CALayer *knobBorderLayer; // @synthesize knobBorderLayer=_knobBorderLayer;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(copy, nonatomic) CDUnknownBlockType onDidChangeBlock; // @synthesize onDidChangeBlock=_onDidChangeBlock;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
- (void).cxx_destruct;
- (void)_accessibilityDisplayOptionsDidChange;
- (struct CGColor *)_trackColor;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 sendAction:(BOOL)arg3;
- (void)_press;
- (struct CGRect)_frameForRect:(struct CGRect)arg1;
- (void)_configureAccessibility;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end