//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBSceneUpdateRequest <IBBinaryArchiving>
@property(copy, nonatomic) NSString *incrementalUpdateSessionID;
@property(readonly, nonatomic) long long renderingFidelity;
@property(readonly, nonatomic) IBSceneUpdateProcessingRequestGroup *processingRequestGroup;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)visitWithFullRequestBlock:(void (^)(IBFullSceneUpdateRequest *))arg1 incrementalRequestBlock:(void (^)(IBIncrementalSceneUpdateRequest *))arg2;
- (void)configureWithConfigurer:(id <IBSceneUpdateRequestConfiguring>)arg1;
@end