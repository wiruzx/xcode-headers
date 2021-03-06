//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDebugProcess : NSObject <IDEDebugTopNavigableModel>
{
    NSMutableArray *_memoryDatas;
    NSMutableArray *_memoryFaultedMemoryData;
    NSMutableSet *_threadsAutoRefreshStackFrames;
    BOOL _threadsAutoRefreshStackFramesDone;
    int _PID;
    int _controlState;
    NSString *_associatedProcessUUID;
    IDELaunchSession *_launchSession;
    NSString *_name;
    NSArray *_threads;
    NSArray *_queues;
    IDEThread *_currentThread;
    IDEStackFrame *_currentStackFrame;
    IDEStackFrame *_instructionPointerStackFrame;
    NSArray *_loadedCodeModules;
    unsigned long long _addressByteSize;
    IDEDebugSession *_parentDebugSession;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingThreads;
+ (void)initialize;
@property(retain, nonatomic) IDEDebugSession *parentDebugSession; // @synthesize parentDebugSession=_parentDebugSession;
@property(nonatomic) BOOL threadsAutoRefreshStackFramesDone; // @synthesize threadsAutoRefreshStackFramesDone=_threadsAutoRefreshStackFramesDone;
@property(readonly, nonatomic) unsigned long long addressByteSize; // @synthesize addressByteSize=_addressByteSize;
@property(readonly, nonatomic) NSArray *loadedCodeModules; // @synthesize loadedCodeModules=_loadedCodeModules;
@property(retain, nonatomic) IDEStackFrame *instructionPointerStackFrame; // @synthesize instructionPointerStackFrame=_instructionPointerStackFrame;
@property(retain, nonatomic) IDEStackFrame *currentStackFrame; // @synthesize currentStackFrame=_currentStackFrame;
@property(retain, nonatomic) IDEThread *currentThread; // @synthesize currentThread=_currentThread;
@property(copy, nonatomic) NSArray *queues; // @synthesize queues=_queues;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(nonatomic) int controlState; // @synthesize controlState=_controlState;
@property(nonatomic) int PID; // @synthesize PID=_PID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)deregisterThreadAutoRefreshesStackFrames:(id)arg1;
- (void)registerThreadAutoRefreshesStackFrames:(id)arg1;
- (void)recordedThreadsForAddress:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (void)shadowMemoryForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg3;
- (void)memoryPointerDescriptionForAddress:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (void)removeMemoryFaultedMemoryDatum:(id)arg1;
- (void)addMemoryFaultedMemoryDatum:(id)arg1;
- (void)removeMemoryData:(id)arg1;
- (void)autoUpdateAllMemoryDatas;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)rawMemoryDataForAddressExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)memoryDataForUUID:(id)arg1;
- (id)memoryDataForAddressOfExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2;
- (Class)classForMemoryData;
- (BOOL)isPaused;
@property(readonly) NSString *subtitle;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (id)contentDelegateUIExtensionIdentifier;
- (id)init;
- (id)initWithDebugSession:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSArray *memoryDatas; // @dynamic memoryDatas;
@property(retain) NSMutableArray *mutableMemoryDatas; // @dynamic mutableMemoryDatas;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end