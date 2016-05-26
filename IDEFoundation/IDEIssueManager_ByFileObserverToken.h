//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEIssueManager_ByFileObserverToken : NSObject <DVTCancellable>
{
    IDEIssueManager *_issueManager;
    NSURL *_documentURL;
    unsigned long long _observingOptions;
    CDUnknownBlockType _observerBlock;
}

@property(readonly, copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(readonly) unsigned long long observingOptions; // @synthesize observingOptions=_observingOptions;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithIssueManager:(id)arg1 documentURL:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end