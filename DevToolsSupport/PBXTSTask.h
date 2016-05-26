//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXTSTask : NSObject <PBXTSByteStreamConsuming>
{
    BOOL _isActive;
    NSObject<PBXTSTaskDelegate> *_delegate;
    NSTask *_task;
    NSPipe *_toTaskPipe;
    NSPipe *_fromTaskPipe;
    NSFileHandle *_fromTaskHandle;
    NSFileHandle *_toTaskHandle;
    BOOL _readTaskOutput;
    BOOL _stopRequested;
    BOOL _taskIsRunning;
    BOOL _gotTaskTerminationNotification;
    BOOL _gotLastFileNotification;
    NSString *_taskPath;
    NSString *_taskDirectory;
    NSArray *_taskArgs;
    NSDictionary *_taskEnv;
    NSData *_taskAutoStdinData;
    int _terminationStatus;
    BOOL _startsNewProcessGroup;
    PBXTSByteStream *_byteStream;
    NSString *_dataCaptureRunLoopMode;
    NSObject<PBXTSTaskSynchronizedFileHandle> *_synchronizedFileHandleDelegate;
    NSConditionLock *_writeLock;
    NSMutableArray *_writeQueue;
    NSArray *_preferredArchitectures;
}

+ (void)checkInRunLoopMode:(id)arg1;
+ (id)checkoutRunLoopMode;
+ (id)architecturesForCPUTypes:(id)arg1;
+ (id)cpuTypesForArchStrings:(id)arg1;
+ (id)cpuTypeStringForArch:(id)arg1;
+ (id)_cpuStringForCPUSubType:(id)arg1;
+ (id)_cpuTypeForArch:(id)arg1;
@property(retain) NSArray *preferredArchitectures; // @synthesize preferredArchitectures=_preferredArchitectures;
@property(readonly, copy) NSString *description;
- (void)setTaskAutomaticStandardInData:(id)arg1;
- (id)taskAutomaticStandardInData;
- (void)setTaskEnvironment:(id)arg1;
- (id)taskEnvironment;
- (void)setTaskArguments:(id)arg1;
- (id)taskArguments;
- (void)setTaskCurrentDirectory:(id)arg1;
- (id)taskCurrentDirectory;
- (void)setTaskPath:(id)arg1;
- (id)taskPath;
- (void)synchronizedFileHandleDidReceivedLastData;
- (void)fileActivityNotification:(id)arg1;
- (void)taskDidTerminate:(id)arg1;
- (void)_sendDidStop;
- (void)cleanupAfterTask;
- (void)closeTaskHandles;
- (void)waitUntilExit;
- (int)processID;
- (id)nsTask;
- (void)interruptTask;
- (void)stopTask;
- (void)startTask;
- (void)executeTaskAtPath:(id)arg1 inDirectory:(id)arg2 withArguments:(id)arg3 withEnvironment:(id)arg4;
- (void)executeTaskAtPath:(id)arg1 inDirectory:(id)arg2 withArguments:(id)arg3 withEnvironment:(id)arg4 withPreferredAchitectures:(id)arg5;
- (void)setTaskStdOutputFileHandle:(id)arg1 readTaskOutput:(BOOL)arg2;
- (void)setTaskStdInputFileHandle:(id)arg1;
- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (BOOL)startsNewProcessGroup;
- (void)setCapturesStandardError:(BOOL)arg1;
- (void)setCapturesStandardOutput:(BOOL)arg1;
- (id)taskStandardError;
- (id)taskStandardOutput;
- (id)taskStandardInput;
- (void)streamDidEnd:(id)arg1;
- (void)stream:(id)arg1 processBytes:(id)arg2;
- (void)sendDataToTask:(id)arg1;
- (void)performWritesInBackground;
- (void)_backgroundWriteThread:(id)arg1;
- (void)sendStringAsCStringToTask:(id)arg1;
- (id)byteStream;
- (id)synchronizedFileHandleDelegate;
- (void)setSynchronizedFileHandleDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isRunning;
- (int)platformExitInformation;
- (int)terminationStatus;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end