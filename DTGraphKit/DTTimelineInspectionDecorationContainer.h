//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelineInspectionDecorationContainer : NSObject
{
    struct map<XRTimeRange, DTTimelineInspectionDecoration *, std::__1::less<XRTimeRange>, std::__1::allocator<std::__1::pair<const XRTimeRange, DTTimelineInspectionDecoration *>>> _decorationsByTimeRange;
    XRIntKeyedDictionary *_associatedObjects;
    DTTimelineDecoratedPlane *_plane;
}

@property(nonatomic) __weak DTTimelineDecoratedPlane *plane; // @synthesize plane=_plane;
@property(retain, nonatomic) XRIntKeyedDictionary *associatedObjects; // @synthesize associatedObjects=_associatedObjects;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)decorationAtTime:(unsigned long long)arg1;
- (id)objectForLabel:(unsigned long long)arg1;
- (void)addDecorationsFromContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)decorate:(CDUnknownBlockType)arg1;
- (id)init;

@end