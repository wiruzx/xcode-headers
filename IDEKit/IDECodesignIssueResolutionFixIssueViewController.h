//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECodesignIssueResolutionFixIssueViewController : IDECodesignIssueResolutionViewController
{
    NSProgressIndicator *_progressIndicator;
}

@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)invokeResolutionOption:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)diagnoseIssue;
- (BOOL)_isValidPortalTeam:(id)arg1;
- (BOOL)_isValidProvisioningTeam:(id)arg1 forDeveloper:(id)arg2;
- (void)_checkValidTeamAndAccountSelectionWithCallback:(CDUnknownBlockType)arg1;
- (id)_portalPlatformIdentifier;
- (void)viewDidInstall;

@end