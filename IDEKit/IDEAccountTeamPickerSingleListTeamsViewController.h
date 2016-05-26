//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAccountTeamPickerSingleListTeamsViewController : IDEViewController <DVTPagingSheetViewController>
{
    IDEAccountTeamPickerWindowController *_pagingSheetWindowController;
    NSTextField *_positioningLabel;
    NSPopUpButton *_teamsPopUp;
}

@property(retain) NSPopUpButton *teamsPopUp; // @synthesize teamsPopUp=_teamsPopUp;
@property(retain) NSTextField *positioningLabel; // @synthesize positioningLabel=_positioningLabel;
@property(retain, nonatomic) IDEAccountTeamPickerWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void).cxx_destruct;
- (id)teamMenuItemForTeam:(id)arg1 wrapper:(id)arg2 indented:(BOOL)arg3;
- (id)accountMenuItemForWrapper:(id)arg1;
- (id)menuFromAccountWrappers:(id)arg1;
- (void)refreshMenu;
- (void)cancel:(id)arg1;
- (void)select:(id)arg1;
- (void)viewAccounts:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end