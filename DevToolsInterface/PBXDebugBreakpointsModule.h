//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXDebugBreakpointsModule : PBXProjectModule <XCSelectionSource, NSOutlineViewDelegate>
{
    PBXExtendedOutlineView *_outlineView;
    NSButton *_checkboxButton;
    PBXBreakpointGroupList *_breakpointGroupList;
    NSMutableArray *_selectedBreakpoints;
    BOOL _processingUpdate;
    long long _editingInProgress;
    NSMutableSet *_alreadyExpandedGroups;
    NSTableColumn *_enabledStatusOutlineColumn;
    NSTableColumn *_nameOutlineColumn;
}

+ (id)sharedBreakpointsModule;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (id)selectedProjectItemPaths;
- (id)statusBar;
- (id)bookmarksForSelection;
- (void)becomeActive;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)doubleClickAction:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (void)delete:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)newBreakpoint:(id)arg1;
- (void)_breakpointWillBeDeleted:(id)arg1;
- (void)_projectItemsDidChange:(id)arg1;
- (void)_updateSelectedBreakpoints;
- (id)breakpoints;
- (void)projectDocumentWillChange:(id)arg1;
- (void)updateDisplay;
- (void)update;
- (void)_expandAllPreviouslyUnseenGroups;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)_synchronizeSelectedBreakpointsWithOutlineView;
- (BOOL)selectBreakpoint:(id)arg1 withModifierFlags:(unsigned long long)arg2;
- (BOOL)_setBreakpoint:(id)arg1 selected:(BOOL)arg2 deselectOthers:(BOOL)arg3;
- (void)_deselectAllBreakpoints;
- (void)_sendSelectedBreakpointsDidChangeNotification;
- (id)_selectedItems;
- (void)_computeBreakpointGroups;
- (id)slideOutTabIconImage;
- (void)setSelectedProjectItems:(id)arg1;
- (long long)_rowForItemAfterTryingToExpose:(id)arg1;
- (id)selectedProjectItems;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithModuleNibName:(id)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)geometryConfigurationDictionary;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end