//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDCompartmentGraphicTextEditor : XDGraphicTextEditor
{
    NSCell *_editingCell;
    long long _editingCompartmentIndex;
    long long _editingCompartmentItemIndex;
}

+ (void)initialize;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)abortEditing;
- (void)endEditing;
- (void)startEditingGraphic:(id)arg1 withEvent:(id)arg2;
- (id)editingCell;
- (void)setEditingCell:(id)arg1;
- (void)dealloc;
- (id)init;

@end