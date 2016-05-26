//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTITunesConnectProxyDelegate : NSObject <ITunesSoftwareServiceUploadDelegate>
{
    CDUnknownBlockType _willBeginCallback;
    CDUnknownBlockType _updatePercentageCallback;
    CDUnknownBlockType _updateMessageCallback;
    CDUnknownBlockType _shouldContinueCallback;
    CDUnknownBlockType _didCompleteCallback;
}

@property(copy) CDUnknownBlockType didCompleteCallback; // @synthesize didCompleteCallback=_didCompleteCallback;
@property(copy) CDUnknownBlockType shouldContinueCallback; // @synthesize shouldContinueCallback=_shouldContinueCallback;
@property(copy) CDUnknownBlockType updateMessageCallback; // @synthesize updateMessageCallback=_updateMessageCallback;
@property(copy) CDUnknownBlockType updatePercentageCallback; // @synthesize updatePercentageCallback=_updatePercentageCallback;
@property(copy) CDUnknownBlockType willBeginCallback; // @synthesize willBeginCallback=_willBeginCallback;
- (void).cxx_destruct;
- (void)softwareService:(id)arg1 didCompleteUploadForApplication:(id)arg2;
- (BOOL)softwareService:(id)arg1 shouldContinueUploadForApplication:(id)arg2;
- (void)softwareService:(id)arg1 didUpdateStatusMessage:(id)arg2 forApplication:(id)arg3;
- (void)softwareService:(id)arg1 didUpdatePercentageComplete:(id)arg2 forApplication:(id)arg3;
- (void)softwareService:(id)arg1 willBeginUploadForApplication:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end