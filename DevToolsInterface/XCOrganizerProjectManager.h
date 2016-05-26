//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCOrganizerProjectManager : NSObject
{
    NSString *_absolutePath;
    PBXGlobalID *_globalID;
    PBXProject *_project;
    PBXProjectDocument *_projectDocument;
    NSMapTable *_executablesForActions;
    NSMapTable *_legacyTargetsForActions;
    struct {
        unsigned int _stoppingAtBreakpoints:1;
        unsigned int _reserved:31;
    } _flags;
    PBXBuildResultsModule *_buildResultsModule;
    PBXDebugSessionModule *_debuggerModule;
    NSString *_savedTempScript;
    XCSnapshotModule *_snapshotModule;
}

@property(retain) PBXGlobalID *globalID; // @synthesize globalID=_globalID;
@property(copy) NSString *savedTempScript; // @synthesize savedTempScript=_savedTempScript;
@property(copy) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
- (void)performManagedProjectAction:(id)arg1 ofType:(int)arg2 definedForPath:(id)arg3 onSelectedNode:(id)arg4 ofItem:(id)arg5;
- (void)_performRunAction:(id)arg1 definedForPath:(id)arg2 onSelectedNode:(id)arg3 ofItem:(id)arg4;
- (void)_updateExecutable:(id)arg1 forRunAction:(id)arg2 definedForPath:(id)arg3 onSelectedNode:(id)arg4 ofItem:(id)arg5;
- (void)_performBuildAction:(id)arg1 operationName:(id)arg2 definedForPath:(id)arg3 onSelectedNode:(id)arg4 ofItem:(id)arg5;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_updateLegacyTarget:(id)arg1 forBuildAction:(id)arg2 definedForPath:(id)arg3 onSelectedNode:(id)arg4 ofItem:(id)arg5;
- (BOOL)_writeTemporaryScriptFileForBuildAction:(id)arg1;
- (id)_pathToUseForAction:(id)arg1 definedForPath:(id)arg2 onSelectedNode:(id)arg3 ofItem:(id)arg4;
- (void)takeSnapshot;
- (void)showSnapshotModule;
- (void)_configureSnapshotModule;
- (void)showDebuggerModule;
- (void)showConsoleModule;
- (void)_configureDebuggerModules;
- (void)showBuildResultsModule;
- (void)removeLegacyTargetForAction:(id)arg1;
- (id)legacyTargetForAction:(id)arg1;
- (void)setLegacyTarget:(id)arg1 forAction:(id)arg2;
- (void)removeExecutableForAction:(id)arg1;
- (id)executableForAction:(id)arg1;
- (void)setExecutable:(id)arg1 forAction:(id)arg2;
@property(getter=isStoppingAtBreakpoints) BOOL stoppingAtBreakpoints;
@property(retain) PBXProjectDocument *projectDocument; // @synthesize projectDocument=_projectDocument;
@property(retain) PBXProject *project; // @synthesize project=_project;
- (void)_createTemporaryProjectAndProjectDocument;
- (id)_pathToTemporaryProject;
- (id)_nameOfTemporaryProject;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAbsolutePath:(id)arg1;

@end