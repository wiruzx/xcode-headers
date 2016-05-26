//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDelayedInvocationPriorityScheduler : DVTDelayedInvocationScheduler
{
    long long _priority;
}

+ (id)schedulerWithPriority:(long long)arg1;
+ (id)defaultScheduler;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (void)unscheduleDelayedInvocation:(id)arg1;
- (void)scheduleDelayedInvocation:(id)arg1;
- (id)initWithPriority:(long long)arg1;

@end