//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBIncrementalSceneUpdateRequest : NSObject <IBSceneUpdateRequest>
{
    NSString *_identifier;
    IBSceneUpdateProcessingRequestGroup *_processingRequestGroup;
    NSString *_incrementalUpdateSessionID;
    long long _renderingFidelity;
}

+ (id)requestWithRenderingFidelity:(long long)arg1;
@property(readonly, nonatomic) long long renderingFidelity; // @synthesize renderingFidelity=_renderingFidelity;
@property(copy, nonatomic) NSString *incrementalUpdateSessionID; // @synthesize incrementalUpdateSessionID=_incrementalUpdateSessionID;
@property(readonly, nonatomic) IBSceneUpdateProcessingRequestGroup *processingRequestGroup; // @synthesize processingRequestGroup=_processingRequestGroup;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)visitWithFullRequestBlock:(CDUnknownBlockType)arg1 incrementalRequestBlock:(CDUnknownBlockType)arg2;
- (void)configureWithConfigurer:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 renderingFidelity:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end