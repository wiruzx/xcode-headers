//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDETestReportAssertionsOutlineObject : NSObject
{
    id <IDETestReport_Test> _test;
    id <IDETestReport_TestRun> _testRun;
    NSArray *_failureSummaries;
}

@property(copy) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(retain) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain) id <IDETestReport_Test> test; // @synthesize test=_test;
- (void).cxx_destruct;

@end