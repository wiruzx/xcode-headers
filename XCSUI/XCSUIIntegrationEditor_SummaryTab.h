//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIIntegrationEditor_SummaryTab : DVTViewController <NSTableViewDelegate, NSTableViewDataSource, XCSBotSupportingEditorHostedViewController>
{
    XCSIntegration *_integration;
    XCSBot *_bot;
    XCSBotSupportingEditor *_botSupportingEditor;
    DVTTableView *_tableView;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, copy) NSArray *currentSelectedItems;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end