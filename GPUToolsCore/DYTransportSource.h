//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYTransportSource : NSObject
{
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _registrationHandler;
    struct dispatch_queue_s *_queue;
    struct dispatch_queue_s *_mqueue;
    DYTransport *_transport;
    int _state;
}

@property(readonly, retain, nonatomic) DYTransport *transport; // @synthesize transport=_transport;
- (void)_dispatch:(id)arg1;
- (void)_cancel;
- (void)_callCancellationHandler;
- (void)_register;
- (void)_callRegistrationHandler;
@property(copy, nonatomic) CDUnknownBlockType registrationHandler; // @dynamic registrationHandler;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @dynamic cancellationHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @dynamic messageHandler;
@property(readonly, nonatomic) BOOL cancelled; // @dynamic cancelled;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (id)_initWithQueue:(struct dispatch_queue_s *)arg1 transport:(id)arg2;
- (id)init;

@end