//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCDependencyNode : NSObject
{
    unsigned long long _nodeNumber;
    NSString *_name;
    NSString *_path;
    PBXTargetBuildContext *_buildContext;
    NSMutableArray *_producerCommands;
    NSMutableArray *_includedNodes;
    NSMutableArray *_consumerCommands;
    NSMutableArray *_includingNodes;
    struct {
        unsigned int alwaysOutOfDate:1;
        unsigned int dontCareIfExists:1;
        unsigned int dontCareAboutTimestamp:1;
        unsigned int shouldScanForIncludes:1;
        unsigned int beingEnqueued:1;
        unsigned int beingReset:1;
        unsigned int synchronizeCommands:1;
    } _dnFlags;
    unsigned int _traversalGenCount;
    XCDerivedFileCache *_derivedFileCache;
    XCBuildInfo *_buildInfo;
    int _state;
    int _highestInclState;
    long long _time;
    long long _newestInclTime;
    CDStruct_7eef4560 _signature;
    CDStruct_7eef4560 _combinedInclSignature;
    long long _fileSize;
    struct {
        long long modTime;
    } _node2009;
}

- (void)_2009_enqueueCommandsOntoWorkQueue:(id)arg1 whenceDebugDesc:(id)arg2;
- (long long)_2009_modTime;
- (void)writeInclusionEdgesToGraphVizFile:(struct __sFILE *)arg1;
- (void)writeDependencyEdgesToGraphVizFile:(struct __sFILE *)arg1;
- (void)writeDefinitionToGraphVizFile:(struct __sFILE *)arg1;
- (id)nameForGraphViz;
- (id)description;
- (id)shortNameForDebugging;
- (id)signatureDescription;
- (id)timeDescription;
- (id)stateDescription;
- (void)removeDiscoveredInfo;
- (void)updateDiscoveredBuildInfo;
- (void)untouch;
- (void)touch;
- (void)fileMayHaveChanged;
- (void)removePredictiveProcessingOutputRecursivelyBecauseOfChangedNode:(id)arg1;
- (void)resetStateRecursively;
- (void)resetState;
- (BOOL)isUpToDate;
- (void)enqueueOutOfDateCommandsOntoWorkQueue:(id)arg1;
- (void)computeStateIfNeeded;
- (void)statFileIfNeeded;
- (void)setCommandInputSignature:(CDStruct_7eef4560)arg1 commandConfigurationSignature:(CDStruct_7eef4560)arg2;
- (CDStruct_7eef4560)combinedSignatureOfIncludedNodes;
- (CDStruct_7eef4560)signature;
- (long long)fileSize;
- (long long)newestTimestampOfIncludedNodes;
- (long long)timestamp;
- (int)highestStateOfIncludedNodes;
- (int)state;
- (BOOL)hasBeenUpdatedByClientId:(id)arg1;
- (void)unlockByClientId:(id)arg1;
- (BOOL)lockForWriting:(BOOL)arg1 byClientId:(id)arg2;
- (int)lockState;
- (id)derivedFileCache;
- (void)setSynchronizeCommandsOnDerivedFileCache:(id)arg1;
- (BOOL)synchronizeCommands;
- (void)setRecordsUpdatedFileListInEnvironment:(BOOL)arg1;
- (BOOL)recordsUpdatedFileListInEnvironment;
- (void)setDontCareAboutTimestamp:(BOOL)arg1;
- (BOOL)dontCareAboutTimestamp;
- (void)setDontCareIfExists:(BOOL)arg1;
- (BOOL)dontCareIfExists;
- (void)setAlwaysOutOfDate:(BOOL)arg1;
- (BOOL)isAlwaysOutOfDate;
- (void)_addConsumerCommand:(id)arg1;
- (void)_addProducerCommand:(id)arg1;
- (void)setScansFileContentsForIncludes:(BOOL)arg1;
- (void)removeAllIncludedNodes;
- (void)addIncludedNode:(id)arg1;
- (void)addDependedNode:(id)arg1;
- (void)_removeIncludingNode:(id)arg1;
- (void)_removeDependingNode:(id)arg1;
- (void)_addIncludingNode:(id)arg1;
- (void)_addDependingNode:(id)arg1;
- (void)invalidateCombinedIncludesSignature;
- (void)invalidateSignature;
- (void)visitDownstreamCommandsUsingPreorderBlock:(CDUnknownBlockType)arg1 postorderBlock:(CDUnknownBlockType)arg2;
- (void)_visitDownstreamCommandsUsingPreorderBlock:(CDUnknownBlockType)arg1 postorderBlock:(CDUnknownBlockType)arg2 recursionAvoidanceBitmap:(char *)arg3 whenceDebugDesc:(id)arg4;
- (void)visitUpstreamCommandsUsingPreorderBlock:(CDUnknownBlockType)arg1 postorderBlock:(CDUnknownBlockType)arg2;
- (void)_visitUpstreamCommandsUsingPreorderBlock:(CDUnknownBlockType)arg1 postorderBlock:(CDUnknownBlockType)arg2 recursionAvoidanceBitmap:(char *)arg3 whenceDebugDesc:(id)arg4;
- (void)makeConsumerCommandsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeConsumerCommandsPerformSelector:(SEL)arg1 withObject:(id)arg2 recursionAvoidanceBitmap:(char *)arg3;
- (void)decrementWaitCount;
- (void)incrementWaitCount;
- (void)setBuildInfo:(id)arg1;
- (id)buildInfo;
- (void)setAutomaticFileContents:(id)arg1;
- (id)automaticFileContents;
- (id)command;
- (id)producerCommand;
- (id)includingNodes;
- (id)consumerCommands;
- (id)includedNodes;
- (id)producerCommands;
- (id)dependencyInfoCacheEntry;
- (id)paths;
- (id)path;
- (BOOL)isVirtual;
- (id)name;
- (unsigned long long)nodeNumber;
- (id)buildNodeState;
- (void)setBuildContext:(id)arg1;
- (id)buildContext;
- (void)detachFromOtherGraphObjects;
- (void)dealloc;
- (id)init;
- (id)initWithNodeNumber:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithNodeNumber:(unsigned long long)arg1 name:(id)arg2 path:(id)arg3;
- (const char *)unretainedFileSystemRepresentation;

@end