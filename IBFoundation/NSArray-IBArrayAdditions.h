//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSArray (IBArrayAdditions) <IBOrderedCollection>
+ (id)ib_arrayByCopyingObject:(id)arg1 numberOfTimes:(long long)arg2;
+ (id)ib_arrayWithIndicesInRange:(struct _NSRange)arg1;
+ (id)ib_arrayWithCollection:(id)arg1;
+ (id)ib_arrayWithObjects:(id *)arg1 count:(long long)arg2 ignoringNil:(BOOL)arg3;
+ (id)ib_arrayWithOptionalObjects:(long long)arg1;
+ (id)ib_arrayWithOptionalObject:(id)arg1;
+ (id)ib_collectionWithObject:(id)arg1;
+ (id)ib_emptyCollection;
+ (Class)ib_mutableClass;
+ (id)ib_orderedCollectionWithOrderedCollection:(id)arg1;
- (void)ib_getObjects:(id *)arg1;
- (void)ib_removeObjectsInReceiverFromArray:(id)arg1;
- (void)ib_removeObjectsInReceiverFromOrderedSet:(id)arg1;
- (void)ib_removeObjectsInReceiverFromSet:(id)arg1;
- (id)ib_subarrayFromIndex:(long long)arg1;
- (BOOL)ib_isEntirelyComposedOfInstancesOfClass:(Class)arg1;
- (id)ib_objectAtIndexIfInBounds:(long long)arg1;
- (void)ib_invokeWithAccessToObjects:(CDUnknownBlockType)arg1;
- (id)ib_maximumObjectUsingComparator:(CDUnknownBlockType)arg1;
- (id)ib_minimumObjectUsingComparator:(CDUnknownBlockType)arg1;
- (id)ib_objectAtIndexFromEnd:(long long)arg1;
- (long long)ib_numberOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_arrayBySortingUsingComparator:(CDUnknownBlockType)arg1;
- (BOOL)ib_isSortedWithComparator:(CDUnknownBlockType)arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(CDUnknownBlockType)arg1;
- (void)ib_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByRemovingNulls;
- (id)ib_indexesOfObjects:(id)arg1;
- (BOOL)ib_objectsAreStrictlyContainedBySet:(id)arg1;
- (BOOL)ib_objectsAreContainedBySet:(id)arg1;
- (id)ib_onlyObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)ib_anyObjectsPassTest:(CDUnknownBlockType)arg1;
- (BOOL)ib_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (long long)ib_commonPrefixLengthWithArray:(id)arg1;
- (BOOL)ib_isLastIndex:(unsigned long long)arg1;
- (id)allObjects;
- (Class)ib_mutableClass;
- (id)ib_objectBeforeObject:(id)arg1 wrap:(BOOL)arg2;
- (id)ib_objectAfterObject:(id)arg1 wrap:(BOOL)arg2;
- (BOOL)ib_isIndexInBounds:(unsigned long long)arg1;
- (id)ib_objectsOfClasses:(id)arg1;
- (id)ib_objectsConformingToProtocol:(id)arg1;
- (id)ib_objectsOfClass:(Class)arg1;
- (id)anyObject;
- (id)ib_uniqueObjects;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(id)arg2;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (id)ib_keepIf:(SEL)arg1 withObject:(id)arg2;
- (id)ib_keepIf:(SEL)arg1;
- (id)ib_arrayByRemovingDuplicates;
- (id)ib_arrayByReversingObjects;
- (id)ib_setByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByMappingAndFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByMappingAndFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByMappingBlockAndAssertingOnNilMappedValue:(CDUnknownBlockType)arg1;
- (id)ib_arrayByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByMappingWithBehavior:(long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (BOOL)ib_binarySearchForObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ib_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_collectionByRemovingObject:(id)arg1;
- (id)ib_collectionByAddingObject:(id)arg1;
- (id)ib_collectionByReversingObjects;
- (id)ib_collectionByKeepingObjectsInSet:(id)arg1;
- (id)ib_collectionByRemovingObjectsInSet:(id)arg1;
- (id)ib_collectionByRemovingObjectsFromCollection:(id)arg1;
- (id)ib_collectionByAddingObjectsFromCollection:(id)arg1;
- (id)ib_collectionByInsertingObjects:(id)arg1 atIndex:(long long)arg2;
- (id)ib_collectionByInsertingObject:(id)arg1 atIndex:(long long)arg2;
- (id)ib_collectionByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_setByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_arrayByRemovingObjectsInArray:(id)arg1;
- (id)ib_arrayByKeepingObjectsInSet:(id)arg1;
- (id)ib_arrayByRemovingObjectsInSet:(id)arg1;
- (id)ib_arrayByRemovingNulls;
- (id)ib_arrayByUniquifyingOnKey:(id)arg1;
- (id)ib_arrayByAppendingObjectsFromArrays:(id)arg1;
- (id)ib_arrayByRemovingObjectAtIndex:(unsigned long long)arg1;
- (id)ib_arrayByRemovingObject:(id)arg1;
- (id)ib_arrayByReplacingObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)ib_arrayByAppendingObjects:(id)arg1;
- (id)ib_onlyObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end