//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol VMUCommonGraphInterface <NSObject>
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly, nonatomic) unsigned int nodeCount;
@property(readonly, nonatomic) unsigned int regionCount;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) DVT_VMUClassInfoMap *realizedClasses;
@property(readonly, nonatomic) unsigned int vmPageSize;
@property(readonly, nonatomic) int pid;
- (void *)contentForNode:(unsigned int)arg1;
- (NSString *)labelForNode:(unsigned int)arg1;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (unsigned int)enumerateReferencesWithBlock:(void (^)(unsigned int, unsigned int, unsigned int, struct, char *))arg1;
- (unsigned int)enumerateRegionsWithBlock:(void (^)(DVT_VMUVMRegion *, char *))arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(void (^)(unsigned int, struct, char *))arg2;
- (unsigned int)enumerateObjectsWithBlock:(void (^)(unsigned int, struct, char *))arg1;
- (NSString *)zoneNameForIndex:(unsigned int)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (void *)copyUserMarked;
@end