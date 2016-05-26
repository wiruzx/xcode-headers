//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCTestGlassTwoFlavorsCell : NSCell
{
    XCPropertyInfoContext *_pic;
    XCTestGlassBuildTableUnit *_tableUnit;
    PBXPopUpButtonCell *_architecturePopUp;
    PBXPopUpButtonCell *_sdkPopUp;
    BOOL _displaySDK;
    BOOL _displayArch;
    XCPropertyDefinition *_pDefinition;
    NSString *_pName;
    XCPropertyConditionSet *_pConditionSet;
}

@property(retain, nonatomic) PBXPopUpButtonCell *sdkPopUp; // @synthesize sdkPopUp=_sdkPopUp;
@property(retain, nonatomic) PBXPopUpButtonCell *architecturePopUp; // @synthesize architecturePopUp=_architecturePopUp;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initUsingCell:(id)arg1 usingPropertyInfoContext:(id)arg2 tableUnit:(id)arg3;
- (void)setFlavorValuesForUserDefinedSetting:(id)arg1 conditionSet:(id)arg2;
- (void)setFlavorValuesForProperty:(id)arg1 conditionSet:(id)arg2;
- (void)setObjectValue:(id)arg1;
- (BOOL)allowsFlavor:(id)arg1;
- (void)setFlavor:(id)arg1 onPropertyNameCell:(id)arg2 otherFlavor:(id)arg3;
- (void)setArchitectureConditionFromPopUp:(id)arg1;
- (void)setSDKConditionFromPopUp:(id)arg1;
- (void)_modifyConditionSetForFlavor:(id)arg1 conditionString:(id)arg2;
- (void)setConditionSet:(id)arg1;
- (id)propertyDefinitionValue;
- (BOOL)hasSetting:(id)arg1 forFlavor:(id)arg2 andSetting:(id)arg3 forFlavor:(id)arg4;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned long long)controlTint;
- (void)setControlTint:(unsigned long long)arg1;
- (long long)backgroundStyle;
- (void)setBackgroundStyle:(long long)arg1;
- (id)_createPopUpCellUsingCell:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_archFrameFor:(struct CGRect)arg1;
- (struct CGRect)_sdkFrameFor:(struct CGRect)arg1;

@end