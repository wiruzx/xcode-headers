//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSMutableArray (DVTFoundationClassAdditions)
- (void)dvt_recursivelyRemoveAllObjects;
- (_Bool)dvt_uniqueSortedInsert:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (_Bool)dvt_uniqueSortedInsert:(id)arg1;
- (void)dvt_sortedMerge:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (void)dvt_sortedMerge:(id)arg1;
- (void)dvt_sortedInsert:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (void)dvt_sortedInsert:(id)arg1 withComparisonSelector:(SEL)arg2;
- (void)dvt_sortedInsert:(id)arg1;
- (void)dvt_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)dvt_addObjectsFromCollection:(id)arg1;
- (void)dvt_addObjectsFromArrayIfAbsent:(id)arg1;
- (void)dvt_addObjectIfNonNil:(id)arg1;
- (void)dvt_addObjectIfAbsent:(id)arg1;
- (id)dvt_popLastObject;
- (id)dvt_popFirstObject;
@end