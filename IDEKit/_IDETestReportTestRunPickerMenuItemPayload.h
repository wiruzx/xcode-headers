//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDETestReportTestRunPickerMenuItemPayload : NSObject
{
    _IDETestReportTestRunPickerRow *_pickerRow;
    id <IDETestReport_TestRun> _testRun;
}

@property(retain) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain) _IDETestReportTestRunPickerRow *pickerRow; // @synthesize pickerRow=_pickerRow;
- (void).cxx_destruct;

@end