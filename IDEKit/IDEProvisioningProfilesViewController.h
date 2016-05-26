//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProvisioningProfilesViewController : IDEViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableSet *_busyProfiles;
    NSMutableIndexSet *_changedIndexesSinceLastRefresh;
    DVTDelayedInvocation *_tableViewUpdateBlock;
    BOOL _needsFullTableViewUpdate;
    NSDate *_lastTableViewUpdate;
    id <IDEProvisioningProfilesViewControllerDelegate> _delegate;
    NSArray *_profiles;
    NSTableColumn *_nameColumn;
    NSTableColumn *_actionColumn;
    NSTableColumn *_expirationDateColumn;
    DVTTableView *_tableView;
}

@property(retain, nonatomic) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTableColumn *expirationDateColumn; // @synthesize expirationDateColumn=_expirationDateColumn;
@property(retain, nonatomic) NSTableColumn *actionColumn; // @synthesize actionColumn=_actionColumn;
@property(retain, nonatomic) NSTableColumn *nameColumn; // @synthesize nameColumn=_nameColumn;
@property(copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) id <IDEProvisioningProfilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)moveProfilesToTrash:(id)arg1;
- (void)showProfileInFinder:(id)arg1;
- (void)updateProfiles:(id)arg1;
- (void)downloadProfiles:(id)arg1;
- (id)_selectedProfiles;
- (id)_logAspect;
- (void)didEndDownloadingOrUpdatingProfiles:(id)arg1;
- (void)didBeginDownloadingOrUpdatingProfiles:(id)arg1;
- (void)_tableViewNeedsFullUpdate;
- (void)_tableViewNeedsUpdateForProfiles:(id)arg1;
- (void)_tableViewNeedsUpdateForRows:(id)arg1;
- (void)initialPopulationCompleted;
- (void)primitiveInvalidate;
- (void)_updateTableView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end