//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCCompileForFixAndContinueFileBuildOperation : XCFileBuildOperation
{
    NSMutableDictionary *_sourcePathsToCompiledFilePaths;
    NSMutableDictionary *_sourcePathsToBundleFilePaths;
    NSMutableArray *_generatedFilePathsToCleanUp;
}

- (int)cleanupAfterRunning;
- (id)createDependenciesForProcessingSourceFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)dealloc;
- (id)initWithProject:(id)arg1 buildAction:(id)arg2 configurationName:(id)arg3 activeArchitecture:(id)arg4 overridingProperties:(id)arg5 buildables:(id)arg6;

@end