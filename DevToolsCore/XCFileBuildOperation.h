//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCFileBuildOperation : XCBuildOperation
{
    NSMutableArray *_fileReferences;
}

- (id)outputFileCommandForSourceNode:(id)arg1 inBuildContext:(id)arg2;
- (id)productNodesInTargetBuildContext:(id)arg1;
- (id)fileReferences;
- (id)createDependenciesForProcessingSourceFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (BOOL)buildsContinueAfterErrors;
- (unsigned long long)maximumNumberOfSubprocesses;
- (BOOL)looksForPredictiveCompilationFiles;
- (void)dealloc;
- (id)initWithProject:(id)arg1 buildAction:(id)arg2 configurationName:(id)arg3 activeArchitecture:(id)arg4 overridingProperties:(id)arg5 fileReferences:(id)arg6 inTarget:(id)arg7;
- (id)initWithProject:(id)arg1 buildAction:(id)arg2 configurationName:(id)arg3 activeArchitecture:(id)arg4 overridingProperties:(id)arg5 buildables:(id)arg6;

@end