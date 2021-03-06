//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEThread : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    IDEThread *_leadingThread;
    BOOL _staleThreadDisplayName;
    long long _lastCompressionValue;
    long long _secondLastCompressionValue;
    NSCache *_compressedStackFramesCache;
    NSMutableArray *_stackFrames;
    BOOL _autoRefreshStackFramesWhenPaused;
    BOOL _hasLatestStackFrames;
    BOOL _hasInitializedStackFrames;
    BOOL _recorded;
    BOOL _recordedForMemoryAddress;
    BOOL _userSuspended;
    int _state;
    int _stopReason;
    int _breakpointStackSelectionBehavior;
    NSString *_associatedProcessUUID;
    NSString *_threadDisplayName;
    IDEDebugProcess *_parentProcess;
    NSNumber *_uniqueID;
    NSString *_threadName;
    IDEDebugQueue *_queue;
    IDEThread *_recordedThread;
    unsigned long long _recordedThreadDepth;
    NSString *_lastReasonStopped;
    IDEMemoryData *_memoryDatum;
    NSString *_qualityOfServiceValue;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)keyPathsForValuesAffectingThreadDisplayName;
+ (id)displayNameForThreadName:(id)arg1 threadID:(id)arg2;
+ (void)initialize;
@property(nonatomic) int breakpointStackSelectionBehavior; // @synthesize breakpointStackSelectionBehavior=_breakpointStackSelectionBehavior;
@property(copy, nonatomic) NSString *qualityOfServiceValue; // @synthesize qualityOfServiceValue=_qualityOfServiceValue;
@property(retain, nonatomic) IDEMemoryData *memoryDatum; // @synthesize memoryDatum=_memoryDatum;
@property(nonatomic) BOOL userSuspended; // @synthesize userSuspended=_userSuspended;
@property(copy, nonatomic) NSString *lastReasonStopped; // @synthesize lastReasonStopped=_lastReasonStopped;
@property(nonatomic, getter=isRecordedForMemoryAddress) BOOL recordedForMemoryAddress; // @synthesize recordedForMemoryAddress=_recordedForMemoryAddress;
@property(nonatomic, getter=isRecorded) BOOL recorded; // @synthesize recorded=_recorded;
@property(nonatomic) unsigned long long recordedThreadDepth; // @synthesize recordedThreadDepth=_recordedThreadDepth;
@property(retain, nonatomic) IDEThread *recordedThread; // @synthesize recordedThread=_recordedThread;
@property BOOL hasInitializedStackFrames; // @synthesize hasInitializedStackFrames=_hasInitializedStackFrames;
@property(nonatomic) BOOL hasLatestStackFrames; // @synthesize hasLatestStackFrames=_hasLatestStackFrames;
@property(nonatomic) BOOL autoRefreshStackFramesWhenPaused; // @synthesize autoRefreshStackFramesWhenPaused=_autoRefreshStackFramesWhenPaused;
@property(retain, nonatomic) IDEDebugQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) int stopReason; // @synthesize stopReason=_stopReason;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) IDEDebugProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)requestUnsuspend;
- (void)requestSuspend;
- (void)_inferStateFromStackFrames:(id)arg1;
- (void)_inferState;
- (id)primitiveStackFrames;
- (id)compressedStackFrames:(long long)arg1;
- (void)requestStackFrames:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (void)refreshStackFrames;
- (void)invalidateUnusedStackFramesAfterCallToSetStackFrames:(id)arg1;
@property(copy, nonatomic) NSArray *stackFrames; // @dynamic stackFrames;
- (void)_invalidateStackFrames:(id)arg1;
- (void)setLeadingThread:(id)arg1 depth:(unsigned long long)arg2;
- (id)leadingThread;
- (void)setPrimitiveQueue:(id)arg1;
- (void)willReuse:(BOOL)arg1;
- (void)_resetQueueStackFramesAndRecordedStates:(BOOL)arg1;
- (void)_resetCurrentStackFrameIfNecessary:(id)arg1;
- (id)compressedStackFramesIncludingRecorded:(long long)arg1;
- (BOOL)_shouldSkipRecordedFrames;
- (BOOL)_isStopped;
@property(readonly, nonatomic) NSString *threadDisplayName; // @synthesize threadDisplayName=_threadDisplayName;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithParentProcess:(id)arg1 uniqueID:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableStackFrames; // @dynamic mutableStackFrames;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end