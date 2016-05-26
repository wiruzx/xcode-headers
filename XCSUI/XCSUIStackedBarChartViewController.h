//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIStackedBarChartViewController : DVTViewController <XCSUIBotSummaryStackedBarGraphDelegate>
{
    NSArray *_stackedBarChartBars;
    NSString *_chartName;
    id <XCSUIStackedBarChartViewControllerDataSource> _dataSource;
    id <XCSUIStackedBarChartViewControllerDelegate> _delegate;
    XCSUIBotSummaryStackedBarGraphController *_graphController;
    unsigned long long _graphType;
    XCSUIBotSummaryStackedBarGraph *_graphView;
    NSTextField *_titleTextField;
    NSTextField *_legendTextField;
}

@property(retain) NSTextField *legendTextField; // @synthesize legendTextField=_legendTextField;
@property(retain) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) XCSUIBotSummaryStackedBarGraph *graphView; // @synthesize graphView=_graphView;
@property unsigned long long graphType; // @synthesize graphType=_graphType;
@property(retain) XCSUIBotSummaryStackedBarGraphController *graphController; // @synthesize graphController=_graphController;
@property(nonatomic) __weak id <XCSUIStackedBarChartViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <XCSUIStackedBarChartViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *chartName; // @synthesize chartName=_chartName;
@property(copy, nonatomic) NSArray *stackedBarChartBars; // @synthesize stackedBarChartBars=_stackedBarChartBars;
- (void).cxx_destruct;
- (void)reloadColumn:(unsigned long long)arg1;
- (void)reloadData;
- (id)emptyColumnColor;
- (void)mouseExitedGraph:(id)arg1 event:(id)arg2;
- (void)mouseClickedOnGraph:(id)arg1 column:(id)arg2 event:(id)arg3;
- (void)mouseMovedOverGraph:(id)arg1 column:(id)arg2 event:(id)arg3;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)setSuppressSuccessBarsIfNoData:(BOOL)arg1;
- (void)_updateLegend;
- (id)_attachmentStringWithFillColor:(id)arg1 strokeColor:(id)arg2;

@end