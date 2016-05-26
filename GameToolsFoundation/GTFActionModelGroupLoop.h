//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GTFActionModelGroupLoop : GTFActionModelGroup
{
    double _finalIterationEndTime;
    int _loopCount;
}

+ (int)kLoopCountInfinite;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_getSKActionForPreview:(BOOL)arg1 withStartTime:(double)arg2 activeAnimationFound:(char *)arg3 ignoreScrubSensitiveActions:(BOOL)arg4;
- (id)getPreviewSKActionWithStartTime:(double)arg1 activeAnimationFound:(char *)arg2 ignoreScrubSensitiveActions:(BOOL)arg3;
- (id)getSKAction;
- (id)getSCNAction;
- (void)update;
- (void)setupLoop;
- (id)init;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) double finalIterationEndTime;
@property(readonly, nonatomic) double firstIterationEndTime;
@property(readonly, nonatomic) double firstIterationStartTime;
@property(readonly, nonatomic) double iterationTime;

@end