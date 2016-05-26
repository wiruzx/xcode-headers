//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXIndentationPrefsModule : PBXPreferencesPaneModule
{
    NSButton *usesTabsCheckbox;
    NSButton *wrapLinesCheckbox;
    NSButton *indentWrappedLinesCheckbox;
    NSTextField *indentWrappedLinesTextField;
    NSTextField *tabWidthTextField;
    NSTextField *indentWidthTextField;
    NSButton *usesCheckbox;
    NSPopUpButton *tabBehaviorPopUp;
    NSTextField *tabBehaviorLabel;
    NSTextField *soloBraceIndentTextField;
    NSTextField *soloBraceIndentLabel;
    NSButton *autoCloseBraceCheckbox;
    NSButton *autoOpenCurlyCheckbox;
    NSButton *autoCloseCurlyCheckbox;
    NSButton *autoSemicolonCheckbox;
    NSButton *autoColonCheckbox;
    NSButton *autoPoundCheckbox;
    NSButton *autoReturnCheckbox;
    NSTextField *autoIndentLabel;
    NSButton *indentSlashSlashCheckbox;
    NSButton *alignSlashSlashCheckbox;
    NSTextField *slashSlashLabel;
}

- (void)popUpAction:(id)arg1;
- (void)textFieldAction:(id)arg1;
- (void)checkBoxAction:(id)arg1;
- (void)initializeFromDefaults;
- (void)_updateEnabledState;
- (void)saveChanges;
- (struct CGSize)minModuleSize;

@end