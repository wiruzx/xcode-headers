//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECoverageReportTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    long long _coverageBarColumnIndex;
    id _item;
}

@property(retain) id item; // @synthesize item=_item;
@property long long coverageBarColumnIndex; // @synthesize coverageBarColumnIndex=_coverageBarColumnIndex;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)testTableCellView;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
- (BOOL)mouseInside;
- (void)setMouseInside:(BOOL)arg1;

@end