//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXFilenameSmartGroup : PBXSmartGroup
{
    NSMutableArray *_childFiles;
    NSString *_rootGroupID;
    PBXGroup *_root;
    BOOL _recursive;
    NSString *_regexString;
    TSRegularExpression *_regex;
    BOOL _didRegComp;
    char *_fnCString;
    id _backgroundTask;
}

+ (id)globalID;
+ (id)flattenArrayOfReferences:(id)arg1;
+ (void)addLeafNodes:(id)arg1 to:(id)arg2 checkUniqueness:(BOOL)arg3 stayFlat:(BOOL)arg4 includeChildrenOfOtherContainers:(BOOL)arg5;
+ (void)addLeafNodes:(id)arg1 to:(id)arg2 checkUniqueness:(BOOL)arg3 stayFlat:(BOOL)arg4;
+ (BOOL)shouldIncludeReference:(id)arg1;
- (id)iconImage;
- (void)_cancelFindChildren:(id)arg1;
- (void)_findChildren:(id)arg1;
- (void)flushCache;
- (id)children;
- (void)setRegexFilter:(id)arg1 simpleFilter:(id)arg2;
- (id)simpleFilter;
- (void)_setSimpleFilter:(id)arg1;
- (void)setSimpleFilter:(id)arg1;
- (id)regexFilter;
- (void)_setRegexFilter:(id)arg1;
- (void)setRegexFilter:(id)arg1;
- (BOOL)recursive;
- (void)setRecursive:(BOOL)arg1;
- (id)gid;
- (id)root;
- (void)_setRootWithGlobalID:(id)arg1;
- (void)setRootWithGlobalID:(id)arg1;
- (void)addLeafNodes:(id)arg1 to:(id)arg2 checkUniqueness:(BOOL)arg3;
- (BOOL)shouldIncludeReference:(id)arg1;
- (void)projectRefereceWillBeRemoved:(id)arg1;
- (void)projectRefereceAdded:(id)arg1;
- (Class)datasourceClass;
- (id)datasource;
- (void)setOwningModule:(id)arg1;
- (BOOL)setName:(id)arg1 syncDisk:(BOOL)arg2;
- (void)setName:(id)arg1;
- (BOOL)allowsEditing;
- (BOOL)isUserSmartGroup;
- (void)setupRoot;
- (void)finalize;
- (void)dealloc;
- (id)initWithBinding:(id)arg1;

@end