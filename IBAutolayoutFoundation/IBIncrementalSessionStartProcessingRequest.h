//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBIncrementalSessionStartProcessingRequest : IBSceneUpdateProcessingRequest
{
}

- (BOOL)requiresSynchronousResultProcessing;
- (id)initWithResultPhase:(long long)arg1 postProcessingBlock:(CDUnknownBlockType)arg2;

@end