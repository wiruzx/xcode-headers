//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSArray (DVTFoundationClassAdditions)
- (id)dvt_flatMap:(CDUnknownBlockType)arg1;
- (id)dvt_componentsJoinedByString:(id)arg1 finalComponentJoinString:(id)arg2;
- (id)dvt_arrayByRemovingDuplicatesFromBack;
- (id)dvt_arrayByRemovingDuplicates;
- (BOOL)dvt_isNonEmpty;
- (BOOL)dvt_hasPrefix:(id)arg1;
- (id)dvt_stringByConcatenatingAsCommandLineArguments;
- (id)dvt_arrayByAddingObjects:(id)arg1;
- (id)dvt_subarrayFromIndex:(long long)arg1;
- (id)dvt_subarrayAfterIndex:(long long)arg1;
- (id)dvt_arrayByReversingObjects;
- (id)dvt_arrayByRemovingObjectsInArray:(id)arg1;
- (BOOL)dvt_areAnyObjectsPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAllObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_objectByFoldingWithBlock:(CDUnknownBlockType)arg1;
- (id)dvt_onlyObject;
- (id)dvt_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_unorderedArrayByGroupingObjectsUsingKeyPaths:(id)arg1;
- (id)dvt_arrayByGroupingAdjacentObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlockStrictly:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingSelector:(SEL)arg1;
- (struct _NSRange)dvt_rangeOfArray:(id)arg1;
- (struct _NSRange)dvt_rangeOfArray:(id)arg1 inRange:(struct _NSRange)arg2;
@end