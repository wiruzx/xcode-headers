//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSTestResult : XCSObject
{
    BOOL passed;
    NSString *keyPath;
    NSDate *date;
    double startTime;
    double endTime;
    NSArray *failureSummaries;
    NSString *testableBlueprintName;
    NSString *testableBlueprintPath;
    XCSDevice *_testedDevice;
    XCSIntegrationTestResult *_integrationResult;
    NSMutableArray *_perfMetrics;
    NSMutableArray *_activityResults;
}

+ (BOOL)_validateWithIntegrationTestResult:(id)arg1 validationErrors:(id *)arg2;
+ (id)testResultWithIntegrationTestResult:(id)arg1 device:(id)arg2 keyPath:(id)arg3 date:(id)arg4 startTime:(double)arg5 endTime:(double)arg6 passed:(BOOL)arg7 failureSummaries:(id)arg8 testableBlueprintPath:(id)arg9 testableBlueprintName:(id)arg10 validationErrors:(id *)arg11;
@property(retain, nonatomic) NSMutableArray *activityResults; // @synthesize activityResults=_activityResults;
@property(retain, nonatomic) NSMutableArray *perfMetrics; // @synthesize perfMetrics=_perfMetrics;
@property(nonatomic) __weak XCSIntegrationTestResult *integrationResult; // @synthesize integrationResult=_integrationResult;
@property(retain, nonatomic) XCSDevice *testedDevice; // @synthesize testedDevice=_testedDevice;
@property(copy, nonatomic) NSString *testableBlueprintPath; // @synthesize testableBlueprintPath;
@property(copy, nonatomic) NSString *testableBlueprintName; // @synthesize testableBlueprintName;
@property(retain, nonatomic) NSArray *failureSummaries; // @synthesize failureSummaries;
@property(nonatomic) BOOL passed; // @synthesize passed;
@property(nonatomic) double endTime; // @synthesize endTime;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath;
- (void).cxx_destruct;
- (BOOL)_validateWithName:(id)arg1 type:(unsigned long long)arg2 unit:(id)arg3 validationErrors:(id *)arg4;
- (BOOL)_validateWithDevice:(id)arg1 keyPath:(id)arg2 date:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 passed:(BOOL)arg6 failureSummaries:(id)arg7 testableBlueprintPath:(id)arg8 testableBlueprintName:(id)arg9 validationErrors:(id *)arg10;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithDevice:(id)arg1 keyPath:(id)arg2 date:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 passed:(BOOL)arg6 failureSummaries:(id)arg7 testableBlueprintPath:(id)arg8 testableBlueprintName:(id)arg9 validationErrors:(id *)arg10;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)activityResultWithTitle:(id)arg1 UUID:(id)arg2 start:(id)arg3 finish:(id)arg4 screenshotFilePath:(id)arg5 snapshotFilePath:(id)arg6 validationErrors:(id *)arg7;
- (id)perfMetricResultWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 unit:(id)arg4 iterations:(id)arg5 baseline:(id)arg6 maxPercentRegression:(double)arg7 maxPercentRelativeStandardDeviation:(double)arg8 hasPassed:(BOOL)arg9 validationErrors:(id *)arg10;

@end