//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTapService : DTXService <DTTapAuthorizedAPI, DTTapBulkDataReceiver>
{
    unsigned int _tapServiceID;
    BOOL _tapIsRunning;
    id <DTTapServiceDelegate> _delegate;
    DTTapConfig *_config;
    DTTapLocal *_tap;
    BOOL _useExpiredPidCache;
    NSObject<OS_dispatch_queue> *_serialQueue;
    DTTapServiceMessageSender *_messageSender;
}

+ (void)registerCapabilities:(id)arg1 forDelegateClass:(Class)arg2 forConnection:(id)arg3;
+ (id)playbackServiceName;
+ (void)initialize;
- (void).cxx_destruct;
- (void)sendFrameMessage:(id)arg1;
- (void)handleBulkData:(const void *)arg1 size:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
- (void)fetchDataNow;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
- (void)setConfig:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end