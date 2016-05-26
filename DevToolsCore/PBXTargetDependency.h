//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXTargetDependency : PBXProjectItem
{
    PBXContainerItemProxy *_targetProxy;
    PBXTarget *_owner;
    BOOL _needsSync;
    NSString *_name;
}

+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)dependencyWithProjectReference:(id)arg1 targetGlobalID:(id)arg2;
+ (id)dependencyWithProjectReference:(id)arg1 targetName:(id)arg2;
+ (id)dependencyWithTarget:(id)arg1;
- (id)description;
- (long long)compareName:(id)arg1;
- (void)_setTargetProxy:(id)arg1;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (void)writeToPListArchiver:(id)arg1;
- (void)_syncCachedValuesWithRemoteTargetIfNeeded;
- (BOOL)needsSync;
- (void)setNeedsSync:(BOOL)arg1;
- (id)orderedRecursiveDependencies;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)setOwner:(id)arg1;
- (id)owner;
- (id)name;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)targetProxy;
- (void)dealloc;
- (id)initWithProjectReference:(id)arg1 targetName:(id)arg2;
- (id)initWithProjectReference:(id)arg1 targetGlobalID:(id)arg2;
- (id)initWithTarget:(id)arg1;
- (id)init;
- (void)addNameToArray:(id)arg1;
- (id)objectSpecifier;

@end