//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEOpenQuicklyIndexMatchProvider : IDEOpenQuicklyMatchProvider
{
    DVTOpenQuicklyPattern *_previousPattern;
    DVTOpenQuicklyPattern *_originalPattern;
    NSArray *_originalMatches;
    unsigned int _currentGeneration;
    BOOL _idle;
}

+ (id)sharedIndexQueryQueue;
@property(getter=isIdle) BOOL idle; // @synthesize idle=_idle;
@property(retain) DVTOpenQuicklyPattern *originalPattern; // @synthesize originalPattern=_originalPattern;
@property(retain) DVTOpenQuicklyPattern *previousPattern; // @synthesize previousPattern=_previousPattern;
@property(copy) NSArray *originalMatches; // @synthesize originalMatches=_originalMatches;
- (void).cxx_destruct;
- (void)finishCalculatingMatches;
- (void)startCalculatingMatches;
- (void)contextDidChange;
- (void)restartQuery;
- (int)minimumQueryStringLength;
- (id)matchesFromCollectedData:(id)arg1;
- (id)collectDataForInput:(id)arg1 index:(id)arg2 currentGeneration:(unsigned int *)arg3 localGeneration:(unsigned int)arg4;
- (id)initWithSearchContext:(id)arg1;

@end