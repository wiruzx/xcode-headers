//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBuildSettingEditorModule : PBXModule
{
    NSButton *_defaultButton;
    NSButton *_cancelButton;
    NSString *_buildSetting;
    NSString *_localizedBuildSetting;
    XCPropertyDefinition *_propertyDefinition;
    XCPropertyConditionSet *_propertyConditionSet;
    XCBuildPropertyItemProxy *_propertyItemProxy;
    PBXProject *_project;
    PBXTarget *_target;
}

@property(retain) PBXProject *project; // @synthesize project=_project;
@property(retain) PBXTarget *target; // @synthesize target=_target;
@property(retain) XCBuildPropertyItemProxy *propertyItemProxy; // @synthesize propertyItemProxy=_propertyItemProxy;
@property(retain) XCPropertyConditionSet *propertyConditionSet; // @synthesize propertyConditionSet=_propertyConditionSet;
@property(retain) XCPropertyDefinition *propertyDefinition; // @synthesize propertyDefinition=_propertyDefinition;
@property(copy) NSString *localizedBuildSetting; // @synthesize localizedBuildSetting=_localizedBuildSetting;
@property(copy) NSString *buildSetting; // @synthesize buildSetting=_buildSetting;
- (void)cancelDefaultAction:(id)arg1;
- (void)performDefaultAction:(id)arg1;
- (void)runSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setValueToBeEdited:(id)arg1;
@property(copy) NSString *string; // @dynamic string;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (struct CGSize)viewMinSize;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;

@end