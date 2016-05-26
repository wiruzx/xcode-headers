//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEBatchFindManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_history;
    unsigned long long _maxHistoryCount;
    NSString *_archivePath;
}

+ (void)initialize;
@property(readonly) NSArray *findHistory; // @synthesize findHistory=_history;
@property(nonatomic) unsigned long long maxHistoryCount; // @synthesize maxHistoryCount=_maxHistoryCount;
- (void).cxx_destruct;
- (void)loadHistory;
- (void)saveHistory;
- (id)historyItemForDescription:(id)arg1;
- (void)clearHistory;
- (void)_removeHistoryFile;
- (void)addHistoryItem:(id)arg1;
- (void)_removeExtraHistory;
- (void)primitiveInvalidate;
- (id)initWithDerivedDataFolderPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end