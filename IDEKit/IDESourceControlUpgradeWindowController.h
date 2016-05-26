//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlUpgradeWindowController : NSWindowController
{
    NSTextField *_titleField;
    NSProgressIndicator *_progressIndicator;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenDictionary;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
}

@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void).cxx_destruct;
- (void)upgradeWorkingCopies:(id)arg1;
- (void)displayError:(id)arg1;
- (void)upgradeSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetForWindow:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)windowNibName;

@end