//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DVTTableCellViewEditableTextField : _DVTTableCellViewTextField
{
    NSString *_stringValueBeforeEditing;
    BOOL _forceIsEditableToNo;
}

- (void).cxx_destruct;
- (BOOL)abortEditing;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isEditable;

@end