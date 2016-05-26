//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlDownloadAssistantContext : IDEAssistantContext
{
    id <DVTSourceControlCancellable> _currentCancellable;
    BOOL _seenFirstAuthError;
    BOOL _locked;
    NSURL *_url;
    DVTSourceControlWorkspaceBlueprint *_blueprint;
    NSMapTable *_repositoriesToCachedLocations;
    NSMapTable *_repositoriesToErrors;
    NSURL *_lockedSaveFolder;
}

@property(retain) NSURL *lockedSaveFolder; // @synthesize lockedSaveFolder=_lockedSaveFolder;
@property BOOL locked; // @synthesize locked=_locked;
@property BOOL seenFirstAuthError; // @synthesize seenFirstAuthError=_seenFirstAuthError;
@property(copy) NSMapTable *repositoriesToErrors; // @synthesize repositoriesToErrors=_repositoriesToErrors;
@property(copy) NSMapTable *repositoriesToCachedLocations; // @synthesize repositoriesToCachedLocations=_repositoriesToCachedLocations;
@property(copy) DVTSourceControlWorkspaceBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(copy) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)cancelCurrentCancellable;
- (void)finishedCurrentCancellable;
@property(retain) id <DVTSourceControlCancellable> currentCancellable;
- (void)updateBlueprintWithErrors:(id)arg1;
- (void)updateBlueprintWithCachedLocations:(id)arg1;
- (void)updateWithBlueprint:(id)arg1;
- (void)updateRepositoryWithError:(id)arg1;
- (void)updateRepositoryWithCachedLocations:(id)arg1;
- (void)updateRepositoryWithBranchAndTagLocations:(id)arg1;
- (void)updateRepositoryWithLocation:(id)arg1;
- (void)updateWithRepository:(id)arg1;
- (void)updateWithURL:(id)arg1;
@property(readonly, copy) NSError *currentError;
@property(readonly, copy) NSArray *cachedLocations;
@property(readonly, copy) DVTSourceControlBranchAndTagLocations *branchAndTagLocations;
@property(readonly, copy) DVTSourceControlRevisionLocation *location;
@property(readonly, copy) DVTSourceControlRemoteRepository *repository;
@property(readonly) BOOL blueprintRepresentsSingleRepository;
- (void)clearErrors;
- (void)resetContext;
- (id)windowTitle;

@end