//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSourceControlWorkspaceBlueprint (IDEFoundationClassAdditions)
+ (void)blueprintWithWorkspace:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)workingCopyConfigurationForRemoteRepository:(id)arg1 sourceControlManager:(id)arg2;
- (id)workingCopyConfigurationForWorkingCopy:(id)arg1 origin:(id)arg2 sourceControlManager:(id)arg3;
- (void)saveToWorkspace:(id)arg1 hasChanged:(BOOL)arg2;
- (BOOL)_shouldSave;
- (BOOL)representsBlueprint:(id)arg1;
@end