//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GTFActionStackView : NSView
{
    BOOL _framesDirty;
    double _trackEndY;
    BOOL _isSuperviewOfNodeTrackViews;
    NSMutableArray *_nodeTrackViews;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) BOOL isSuperviewOfNodeTrackViews; // @synthesize isSuperviewOfNodeTrackViews=_isSuperviewOfNodeTrackViews;
@property(readonly, nonatomic) NSMutableArray *nodeTrackViews; // @synthesize nodeTrackViews=_nodeTrackViews;
- (void).cxx_destruct;
- (void)redrawAllTrackViewsWithDirtyRect:(struct CGRect)arg1;
- (void)redrawAllTrackViews;
- (void)adjustHeight;
- (void)readjustNodeTrackFrames;
- (BOOL)isFlipped;
- (void)viewWillDraw;
- (void)markDirty;
- (void)removeAllNodeTracks;
- (void)removeNodeTrackFromStack:(id)arg1;
- (void)addNodeTrackToEndOfStack:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;

@end