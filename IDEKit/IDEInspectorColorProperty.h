//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEInspectorColorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_defaultColorKeyPath;
    IDEInspectorKeyPath *_supportsNilKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_colorListKeyPath;
    NSColor *_defaultColor;
    BOOL _targettingCIColor;
    BOOL _defaultColorForNil;
    NSString *_title;
    DVTColorPickerPopUpButton *_popUpButton;
    NSTextField *_label;
}

@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) DVTColorPickerPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (id)valueFromColor:(id)arg1;
- (id)colorFromValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (id)nibName;
- (double)baseline;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end