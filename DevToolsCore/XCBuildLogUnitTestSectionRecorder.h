//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBuildLogUnitTestSectionRecorder : XCBuildLogSectionRecorder
{
    TSRegularExpression *_endMarker;
    BOOL _canFinish;
}

@property BOOL canFinish; // @synthesize canFinish=_canFinish;
@property(copy) TSRegularExpression *endMarker; // @synthesize endMarker=_endMarker;
- (id)section;
- (void)dealloc;
- (id)initWithLogSection:(id)arg1;

@end