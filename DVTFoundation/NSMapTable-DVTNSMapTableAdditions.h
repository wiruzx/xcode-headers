//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSMapTable (DVTNSMapTableAdditions)
+ (id)dvt_strongObjectToStrongObjectTable;
+ (id)dvt_strongObjectPointerToStrongObjectTable;
- (id)dvt_objectForKey:(id)arg1 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2;
- (void)dvt_addObject:(id)arg1 toArrayForKey:(id)arg2;
- (id)dvt_collectionOfClass:(Class)arg1 forKey:(id)arg2;
- (id)dvt_removeObjectForKey:(id)arg1;
- (void)dvt_enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_allValues;
- (id)dvt_allKeys;
@end