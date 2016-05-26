//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelineTileDrawingContext : NSObject
{
    struct CGContext *_cgContext;
    struct TileMetrics _tileMetrics;
    struct CGPath *_defaultColorPath;
    struct unordered_map<unsigned long, std::__1::tuple<NSColor *, CGPath *>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::tuple<NSColor *, CGPath *>>>> _paths;
    NSMutableDictionary *_stringsDictionary;
    NSMutableArray *_clippableStringsArray;
    struct unordered_map<double, NSImage *, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<const double, NSImage *>>> _imageDictionary;
    long long _dynamicRangeLow;
    long long _dynamicRangeHigh;
    double _range;
    double _screenScale;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct TileMetrics *tileMetrics;
- (double)_heightForPlane:(int)arg1;
- (double)_yForBottomOfPlane:(int)arg1;
- (double)_yForTopOfPlane:(int)arg1;
- (double)_heightOfPlane:(int)arg1;
- (void)unlockContext;
- (void)_renderClippableStringsInContext:(struct CGContext *)arg1;
- (void)_renderStringsInContext:(struct CGContext *)arg1;
- (void)_renderImages;
- (void)lockContext:(struct CGContext *)arg1;
- (void)addPlaneConnectionFromPlane:(int)arg1 toPlane:(int)arg2 span:(struct Span)arg3 instantaneous:(_Bool)arg4 color:(id)arg5 sourceAnchorLocation:(unsigned char)arg6 sourceImage:(id)arg7 sourceImageLocation:(unsigned char)arg8 sinkAnchorLocation:(unsigned char)arg9 sinkImage:(id)arg10 sinkImageLocation:(unsigned char)arg11 swapImagesIfInverted:(BOOL)arg12 swapImageLocationsIfInverted:(BOOL)arg13 hideSource:(BOOL)arg14 hideSink:(BOOL)arg15;
- (void)addAttributedString:(id)arg1 span:(struct Span)arg2;
- (void)addAttributedString:(id)arg1 position:(double)arg2;
- (void)addArrayOfIntervalValues:(const long long *)arg1 colors:(const id *)arg2 count:(unsigned int)arg3 span:(struct Span)arg4;
- (void)addIntervalValue:(long long)arg1 color:(id)arg2 icon:(id)arg3 span:(struct Span)arg4;
- (void)addCenteredCircleAtPt:(double)arg1 color:(id)arg2;
- (void)addCapsuleShapeInSpan:(struct Span)arg1 color:(id)arg2;
- (void)addEventIcon:(id)arg1 origin:(double)arg2 multiplicity:(unsigned int)arg3;
- (void)addPointValue:(long long)arg1 color:(id)arg2 position:(double)arg3;
- (void)dealloc;
- (id)initWithTileMetrics:(const struct TileMetrics *)arg1;

@end