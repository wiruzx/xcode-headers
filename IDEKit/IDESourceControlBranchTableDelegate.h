//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDESourceControlBranchTableDelegate <NSObject>

@optional
- (void)displayError:(NSError *)arg1;
- (IDEWorkspace *)workspace;
- (void)didRemoveBranch;
- (void)willRemoveBranch;
- (void)setSelectedBranch:(DVTSourceControlBranch *)arg1;
@end