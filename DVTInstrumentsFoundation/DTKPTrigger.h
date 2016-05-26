//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTKPTrigger : NSObject
{
    BOOL _collectUserStacks;
    BOOL _collectKernelStacks;
    unsigned int _triggerID;
    unsigned int _actionID;
    unsigned int _samplers;
    NSObject<OS_dispatch_semaphore> *_lock;
    id <DTKPTriggerCounterAllocatorProvider> _counterAllocatorProvider;
}

+ (int)reinitializeKperf:(id *)arg1;
@property(readonly, nonatomic) id <DTKPTriggerCounterAllocatorProvider> counterAllocatorProvider; // @synthesize counterAllocatorProvider=_counterAllocatorProvider;
@property(nonatomic) unsigned int samplers; // @synthesize samplers=_samplers;
@property(nonatomic) unsigned int actionID; // @synthesize actionID=_actionID;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(nonatomic) BOOL collectKernelStacks; // @synthesize collectKernelStacks=_collectKernelStacks;
@property(nonatomic) BOOL collectUserStacks; // @synthesize collectUserStacks=_collectUserStacks;
@property(readonly, nonatomic) unsigned int triggerID; // @synthesize triggerID=_triggerID;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) DTKPCPUCounterAllocator *queryCounterAllocator;
@property(readonly, retain, nonatomic) DTKPCPUCounterAllocator *counterAllocator;
- (int)_setFilterByTask:(unsigned int)arg1 forAction:(unsigned int)arg2;
- (int)_setSamplers:(unsigned int)arg1 forAction:(unsigned int)arg2;
- (void)_actionDealloc:(unsigned int)arg1;
- (unsigned int)_actionAlloc;
- (int)stop:(id *)arg1;
- (int)start:(id *)arg1;
- (void)dealloc;
- (id)initWithCounterAllocatorProvider:(id)arg1;
- (id)init;

@end