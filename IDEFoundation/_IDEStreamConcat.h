//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDEStreamConcat : IDEStream
{
    id <IDEStreamPublisher> _first;
    id <IDEStreamPublisher> _second;
}

+ (id)withFirst:(id)arg1 second:(id)arg2;
@property(retain) id <IDEStreamPublisher> second; // @synthesize second=_second;
@property(retain) id <IDEStreamPublisher> first; // @synthesize first=_first;
- (void).cxx_destruct;
- (void)onCompleted;
- (void)onNext:(id)arg1;
- (void)cancel;
- (void)subscribeConsumer:(id)arg1;

@end