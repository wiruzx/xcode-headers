//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTapMemoHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _seenNonStatusMemo;
    DTTapConfig *_config;
    id <DTTapMemoHandlerDelegate> _delegate;
}

@property(readonly, retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)handleMemo:(id)arg1;
- (void)resume;
- (void)suspend;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;

@end