//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDEPlaygroundCommonRootGroup : IDEGroup
{
}

- (BOOL)_structureEditRemoveSubitemsShouldCloseDocumentsUnderPathWithoutSaving;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (id)_indexesOfSubitemsThatExistAtIndexes:(id)arg1;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
- (id)computedSubitemsWithOldSubitems:(id)arg1;
- (BOOL)subitemsAreEditable;
- (BOOL)subitemsAreComputed;

@end