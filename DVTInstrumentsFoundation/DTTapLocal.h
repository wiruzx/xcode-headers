//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTapLocal : DTTap
{
    CDUnknownBlockType _nextTaskForPid;
    NSObject<OS_dispatch_source> *_pollTimer;
    id <DTTapLocalDelegate> _delegate;
}

@property(readonly, retain) id <DTTapLocalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleStatus:(unsigned int)arg1 timestamp:(unsigned long long)arg2 notice:(id)arg3 info:(id)arg4;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (BOOL)_canFetchWhileArchiving;
- (void)_unpause;
- (void)_pause;
- (void)_stop;
- (void)_start;
- (void)setTaskForPidBlock:(CDUnknownBlockType)arg1;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 delegate:(id)arg3;

@end