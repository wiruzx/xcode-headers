//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTapRemote : DTTap
{
    DTXConnection *_connection;
    DTXChannel *_channel;
    NSObject<OS_dispatch_queue> *_unprocessedMessageQueue;
    BOOL _connectionEnabled;
    DTTapMessageHandler *_messageHandler;
}

@property(readonly, retain, nonatomic) DTTapMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (void)_unpause;
- (void)_pause;
- (void)_stop;
- (void)_start;
- (void)messageReceived:(id)arg1;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 messageHandler:(id)arg3 connection:(id)arg4;

@end