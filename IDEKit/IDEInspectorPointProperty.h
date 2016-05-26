//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEInspectorPointProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_nonNilValueObjectKeyPath;
    NSString *_nilPlaceholder;
    BOOL _allowsNilValues;
    long long _checkStateForNonNil;
    long long _checkStateForNil;
    NSTextField *_xTextField;
    NSTextField *_yTextField;
    NSStepper *_xStepper;
    NSStepper *_yStepper;
    NSTextField *_xLabel;
    NSTextField *_yLabel;
    NSButton *_hasValueCheckBox;
}

@property(retain, nonatomic) NSButton *hasValueCheckBox; // @synthesize hasValueCheckBox=_hasValueCheckBox;
@property(retain, nonatomic) NSTextField *yLabel; // @synthesize yLabel=_yLabel;
@property(retain, nonatomic) NSTextField *xLabel; // @synthesize xLabel=_xLabel;
@property(retain, nonatomic) NSStepper *yStepper; // @synthesize yStepper=_yStepper;
@property(retain, nonatomic) NSStepper *xStepper; // @synthesize xStepper=_xStepper;
@property(retain, nonatomic) NSTextField *yTextField; // @synthesize yTextField=_yTextField;
@property(retain, nonatomic) NSTextField *xTextField; // @synthesize xTextField=_xTextField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
- (void)toggleNilValue:(id)arg1;
- (void)userDidEnterY:(id)arg1;
- (void)userDidEnterX:(id)arg1;
- (void)userDidIncrementY:(id)arg1;
- (void)userDidIncrementX:(id)arg1;
- (void)applyUserPointFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;
- (id)nibName;
- (void)loadView;
- (void)setupRefreshTriggersAndConfigure;
- (id)stringForYLabel;
- (id)stringForXLabel;
- (BOOL)allowsNilValues;

@end