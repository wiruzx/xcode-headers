//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIBotDefinitionEditor_BuildConfigurationCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    XCSUIBotDefinitionContext *_definitionContext;
    XCSUIBotDefinition_BuildConfigurationEditor *_buildConfigurationEditor;
}

+ (id)title;
@property(retain, nonatomic) XCSUIBotDefinition_BuildConfigurationEditor *buildConfigurationEditor; // @synthesize buildConfigurationEditor=_buildConfigurationEditor;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end