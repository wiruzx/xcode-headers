//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSLocalIntegration : NSObject
{
    XCSIntegration *_cachedIntegration;
    BOOL _stateChanged;
    long long _currentStep;
    long long _result;
    XCSIntegrationIssues *_integrationIssues;
    XCSCommitHistory *_commitHistory;
    NSString *_currentAdvisoryMessage;
    double _aggregateProgress;
    NSString *_integrationIdentifier;
}

+ (id)sharedItemWithIntegration:(id)arg1;
+ (id)sharedItemWithIntegrationID:(id)arg1 botID:(id)arg2 service:(id)arg3;
+ (id)sharedItemWithIntegrationIdentifier:(id)arg1 service:(id)arg2 botIdentifier:(id)arg3 cachedIntegration:(id)arg4;
+ (id)mapTableIdentifierForService:(id)arg1 botIdentifier:(id)arg2 integrationIdentifier:(id)arg3;
+ (void)initialize;
@property(copy, nonatomic) NSString *integrationIdentifier; // @synthesize integrationIdentifier=_integrationIdentifier;
@property(nonatomic) double aggregateProgress; // @synthesize aggregateProgress=_aggregateProgress;
@property(copy, nonatomic) NSString *currentAdvisoryMessage; // @synthesize currentAdvisoryMessage=_currentAdvisoryMessage;
@property(nonatomic) BOOL stateChanged; // @synthesize stateChanged=_stateChanged;
@property(retain, nonatomic) XCSCommitHistory *commitHistory; // @synthesize commitHistory=_commitHistory;
@property(retain, nonatomic) XCSIntegrationIssues *integrationIssues; // @synthesize integrationIssues=_integrationIssues;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) long long currentStep; // @synthesize currentStep=_currentStep;
- (void).cxx_destruct;
- (void)purgeFromCache;
- (void)deleteIntegrationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelIntegrationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)integrateAndClean:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCommitHistory:(CDUnknownBlockType)arg1;
- (void)fetchIssues:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL codeCoverageDataAvailable;
@property(readonly, nonatomic) NSDictionary *revisionBlueprintDictionary;
- (void)updateCachedIntegration:(CDUnknownBlockType)arg1;
- (void)updateCurrentAdvisoryMessage:(id)arg1;
- (void)updateAggregateProgress:(double)arg1;
- (void)updateCurrentStep:(long long)arg1 currentResult:(long long)arg2;
@property(readonly, nonatomic) XCSIntegration *cachedIntegration;
@property(readonly, nonatomic) BOOL isRunning;
- (id)stepString;
@property(readonly, nonatomic) XCSBuildResultSummary *buildResultSummary;
- (id)serviceName;
@property(readonly, nonatomic) NSString *serviceIdentifier;
@property(readonly, nonatomic) NSString *botIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *botName;
@property(readonly, nonatomic) NSString *integrationNumber;
@property(readonly, nonatomic) NSDate *endedTime;
@property(readonly, nonatomic) NSString *statusString;
@property(readonly, nonatomic) BOOL isIntegrationCompleted;
- (id)description;
- (id)initWithIntegration:(id)arg1;

@end