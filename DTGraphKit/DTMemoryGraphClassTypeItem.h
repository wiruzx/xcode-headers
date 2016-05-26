//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTMemoryGraphClassTypeItem : DTMemoryGraphItem
{
    DVT_VMUClassInfo *_info;
    unsigned long long _addressFilter;
    unsigned int _filteredItemCount;
    unsigned int _leakCount;
    unsigned int _shownCount;
    BOOL _needsRefilter;
    struct vector<std::__1::tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>, std::__1::allocator<std::__1::tuple<unsigned int, DTItemIndexAndFlags, DTMemoryGraphItem *>>> *_children;
    unsigned long long _mallocBlockSize;
}

@property(nonatomic) unsigned long long mallocBlockSize; // @synthesize mallocBlockSize=_mallocBlockSize;
- (void).cxx_destruct;
- (id)subitemAtIndex:(unsigned long long)arg1;
- (void)_setFilter:(CDUnknownBlockType)arg1 string:(id)arg2 instanceFilter:(unsigned long long)arg3;
- (void)_refilterIfNecessary;
- (unsigned long long)subitemCount;
- (unsigned long long)leakedCount;
- (unsigned long long)count;
- (id)name;
- (void)addChildNode:(unsigned int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (CDStruct_599faf0f)nodeDetails;
- (long long)itemKind;
- (void)dealloc;
- (id)initWithClassInfo:(id)arg1 graphIndex:(id)arg2;

@end