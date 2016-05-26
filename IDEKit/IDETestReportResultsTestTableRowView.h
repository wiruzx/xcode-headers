//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETestReportResultsTestTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    BOOL _isFirstRowAfterTestRunPickerRow;
    id _item;
    long long _row;
    CDUnknownBlockType _selectionChangedCallback;
}

@property(copy) CDUnknownBlockType selectionChangedCallback; // @synthesize selectionChangedCallback=_selectionChangedCallback;
@property long long row; // @synthesize row=_row;
@property(retain) id item; // @synthesize item=_item;
@property BOOL isFirstRowAfterTestRunPickerRow; // @synthesize isFirstRowAfterTestRunPickerRow=_isFirstRowAfterTestRunPickerRow;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)tableCellView;
- (id)testTargetTableCellView;
- (id)testTableCellView;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
- (BOOL)mouseInside;
- (void)setMouseInside:(BOOL)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)refreshSelectedState;

@end