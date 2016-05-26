//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEKeyBindingFieldCellDelegate <NSObject>

@optional
- (NSAttributedString *)keyBindingFieldCellWillReturnAttributedString:(IDEKeyBindingFieldCell *)arg1;
- (void)keyBindingFieldCellWillRemoveKeyboardShortcut:(IDEKeyboardShortcut *)arg1;
- (void)keyBindingFieldCellDidAddKeyboardShortcut:(IDEKeyboardShortcut *)arg1;
- (void)keyBindingCellFieldDidEndEditing:(IDEKeyBindingFieldCell *)arg1;
- (IDEKeyboardShortcut *)keyBindingFieldCell:(IDEKeyBindingFieldCell *)arg1 validatedKeyboardShortcut:(IDEKeyboardShortcut *)arg2;
- (NSArray *)keyBindingFieldCell:(IDEKeyBindingFieldCell *)arg1 alternateKeyBindingsForKeyBinding:(IDEKeyBinding *)arg2;
- (BOOL)keyBindingFieldCellAllowsMultipleKeyboardShortcut:(IDEKeyBindingFieldCell *)arg1;
- (BOOL)keyBindingFieldCell:(IDEKeyBindingFieldCell *)arg1 keyboardShortcutIsPrefix:(IDEKeyboardShortcut *)arg2;
@end