//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEBatchFindLocationPickerView : DVTBorderedView <NSOutlineViewDelegate, NSOutlineViewDataSource, DVTInvalidation>
{
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    NSString *_fileNameFilterString;
    NSPredicate *_allowedFileFilterPredicate;
    NSPredicate *_selectableItemPredicate;
    NSArray *_rootItems;
    IDENavigatorDataCell *_plainObjectCell;
    IDENavigatorDataCell *_scopeObjectCell;
    NSTextFieldCell *_headerObjectCell;
    NSButtonCell *_editingStatusCell;
    NSTextFieldCell *_statusCell;
    NSArray *_realSelectedItems;
    IDENavigableItem *_lastNavigableItemComputed;
    NSArray *_lastComputedChildItems;
    DVTObservingToken *_selectionObserverToken;
    BOOL _canChooseGroups;
    NSPredicate *_selectableFileFilterPredicate;
    NSScrollView *_scrollView;
    IDEBatchFindLocationOutlineView *_outlineView;
    NSSearchField *_searchField;
    id _target;
    id <IDEBatchFindLocationPickerViewDelegate> _delegate;
    NSMutableSet *_groupsFilteredIn;
    NSString *_filterString;
    IDEWorkspace *_workspace;
    CDUnknownBlockType _selectionBlock;
    CDUnknownBlockType _editBlock;
    CDUnknownBlockType _doubleClickBlock;
    CDUnknownBlockType _deleteBlock;
}

+ (id)keyPathsForValuesAffectingRootNavigableItems;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType doubleClickBlock; // @synthesize doubleClickBlock=_doubleClickBlock;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) NSMutableSet *groupsFilteredIn; // @synthesize groupsFilteredIn=_groupsFilteredIn;
@property(retain, nonatomic) id <IDEBatchFindLocationPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id target; // @synthesize target=_target;
@property(nonatomic) BOOL canChooseGroups; // @synthesize canChooseGroups=_canChooseGroups;
@property(retain) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) IDEBatchFindLocationOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *rootItems; // @synthesize rootItems=_rootItems;
@property(copy, nonatomic) NSPredicate *_selectableItemPredicate; // @synthesize _selectableItemPredicate;
@property(copy) NSArray *_realSelectedItems; // @synthesize _realSelectedItems;
@property(copy) NSString *_fileNameFilterString; // @synthesize _fileNameFilterString;
@property(copy, nonatomic) NSPredicate *selectableNavigableItemFilter; // @synthesize selectableNavigableItemFilter=_selectableFileFilterPredicate;
@property(copy, nonatomic) NSPredicate *allowedNavigableItemFilter; // @synthesize allowedNavigableItemFilter=_allowedFileFilterPredicate;
- (void).cxx_destruct;
- (id)_defaultEmptyContentString;
- (id)outlineView:(id)arg1 childItemsForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (struct CGRect)getOutlineViewFrame;
- (void)navigableItemCoordinatorDidForgetNavigableItems:(id)arg1;
- (id)getChildGroupsForNavigable:(id)arg1;
- (id)headerObjectCell;
- (id)scopeObjectCell;
- (id)statusItemCell:(BOOL)arg1 isSelected:(BOOL)arg2;
- (id)plainObjectCell;
- (void)viewDidMoveToSuperview;
- (void)primitiveInvalidate;
@property(retain) IDENavigableItemAsyncFilteringCoordinator *navigableItemCoordinator;
- (id)filter;
- (void)ensureItemsAreVisible:(id)arg1;
@property(retain) NSArray *selectedItems;
- (id)_indexesOfSelectedRepresentedObjects:(id)arg1;
- (id)selectedNavigableItems;
- (BOOL)canAdd;
- (void)calculateGroupsFilteredIn:(id)arg1;
- (void)expandRootItems;
- (void)setSelectedItemsFromNameTree:(id)arg1;
- (id)selectedItemsAsNameTree;
- (id)_getRootNavigableItemForScopes;
- (id)_getRootNavigableItemForWorkspace;
- (void)_expandNonGroups:(id)arg1;
- (id)rootNavigableItems;
@property BOOL isEditingScope; // @dynamic isEditingScope;
@property BOOL allowsMultipleSelection;
- (void)keyDown:(id)arg1;
- (void)_doubleClickAction:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end