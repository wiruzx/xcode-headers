//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVT_VMUClassInfoMap : NSObject <NSSecureCoding>
{
    void *_map1;
    void *_map2;
    NSMutableArray *_linearClassInfos;
}

+ (void)_destroyRetainedLinearArray:(id *)arg1 withCount:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
- (id *)_retainedLinearArrayWithReturnedCount:(unsigned int *)arg1;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInfosWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)classInfoForIndex:(unsigned int)arg1;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (unsigned int)indexForClassInfo:(id)arg1;
- (unsigned int)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (void)addClassInfosFromMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end