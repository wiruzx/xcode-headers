//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEOpenQuicklySystemHeaderMatchProvider : IDEOpenQuicklyMatchProvider
{
    id <DVTCancellable> _dataSourceMatchObserver;
    NSArray *_searchPaths;
    DVTOpenQuicklyPattern *_previousPattern;
    IDEOpenQuicklyDataSource *_dataSource;
}

+ (id)keyPathsForValuesAffectingIdle;
@property(retain) IDEOpenQuicklyDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) DVTOpenQuicklyPattern *previousPattern; // @synthesize previousPattern=_previousPattern;
- (void).cxx_destruct;
- (void)contextDidChange;
- (void)finishCalculatingMatches;
- (void)startCalculatingMatches;
- (BOOL)isIdle;
- (id)initWithSearchContext:(id)arg1;

@end