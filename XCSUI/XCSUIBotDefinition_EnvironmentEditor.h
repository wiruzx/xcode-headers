//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIBotDefinition_EnvironmentEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>
{
    BOOL _preventGoFowardOrFinish;
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableDictionary *_environmentVariables;
    NSMutableArray *_environmentVariablesArray;
    DVTTableView *_environmentVariablesTableView;
    DVTGradientImageButton *_addEnvironmentVariableButton;
    DVTGradientImageButton *_removeEnvironmentVariableButton;
    NSTextField *_envVarNameCellView;
    NSTextField *_envVarValueCellView;
    DVTBorderedView *_tableBorderedView;
}

@property __weak DVTBorderedView *tableBorderedView; // @synthesize tableBorderedView=_tableBorderedView;
@property __weak NSTextField *envVarValueCellView; // @synthesize envVarValueCellView=_envVarValueCellView;
@property __weak NSTextField *envVarNameCellView; // @synthesize envVarNameCellView=_envVarNameCellView;
@property __weak DVTGradientImageButton *removeEnvironmentVariableButton; // @synthesize removeEnvironmentVariableButton=_removeEnvironmentVariableButton;
@property __weak DVTGradientImageButton *addEnvironmentVariableButton; // @synthesize addEnvironmentVariableButton=_addEnvironmentVariableButton;
@property __weak DVTTableView *environmentVariablesTableView; // @synthesize environmentVariablesTableView=_environmentVariablesTableView;
@property(retain, nonatomic) NSMutableArray *environmentVariablesArray; // @synthesize environmentVariablesArray=_environmentVariablesArray;
@property(retain, nonatomic) NSMutableDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(nonatomic) BOOL preventGoFowardOrFinish; // @synthesize preventGoFowardOrFinish=_preventGoFowardOrFinish;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)didEndEditingEnvVarValue:(id)arg1;
- (void)didEndEditingEnvVarName:(id)arg1;
- (void)removeEnvironmentVariable:(id)arg1;
- (void)addEnvironmentVariable:(id)arg1;
- (BOOL)canGoForward;
- (void)commitChanges;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end