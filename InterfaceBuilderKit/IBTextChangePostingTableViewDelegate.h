//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBTextChangePostingTableViewDelegate <NSTableViewDelegate>
- (void)control:(NSControl *)arg1 textDidEndEditing:(NSText *)arg2;
- (NSArray *)tableView:(NSTableView *)arg1 textView:(NSTextView *)arg2 completions:(NSArray *)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (struct _NSRange)tableView:(NSTableView *)arg1 textView:(NSTextView *)arg2 willChangeSelectionFromCharacterRange:(struct _NSRange)arg3 toCharacterRange:(struct _NSRange)arg4;
- (BOOL)tableView:(NSTableView *)arg1 textView:(NSTextView *)arg2 shouldChangeTextInRange:(struct _NSRange)arg3 replacementString:(NSString *)arg4;
- (void)control:(NSControl *)arg1 textDidChange:(NSText *)arg2;
@end