//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETestingCommands : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)_sharedHandler;
@property(retain) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void).cxx_destruct;
- (void)runTestToHereThenRecordUITest:(id)arg1;
- (void)stopRecordingUITest:(id)arg1;
- (void)startRecordingUITestHere:(id)arg1;
- (void)toggleRecordingUITest:(id)arg1;
- (void)contextMenu_profileTest:(id)arg1;
- (void)contextMenu_runTest:(id)arg1;
- (void)profileAgain:(id)arg1;
- (void)profileSelectedItems:(id)arg1;
- (void)testAgain:(id)arg1;
- (void)testSelectedItems:(id)arg1;
- (id)_currentWorkspace;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_localizedString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end