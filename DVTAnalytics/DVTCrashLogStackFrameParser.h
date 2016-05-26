//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCrashLogStackFrameParser : NSObject
{
    NSString *_identifier;
    double _priority;
}

@property(readonly) double priority; // @synthesize priority=_priority;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)parsedStackFrameFromText:(id)arg1;
- (id)initWithParserIdentifier:(id)arg1 priority:(double)arg2;

@end