//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTKPRecord : NSObject
{
    unsigned long long _counterValuesArray[16];
    unsigned long long _kdebugArgumentsArray[5];
    unsigned int _recordType;
    unsigned int _triggerID;
    unsigned int _cpuNumber;
    int _pid;
    unsigned int _threadState;
    unsigned int _supervisorFrameCount;
    unsigned int _supervisorExtraDataCount;
    unsigned int _userFrameCount;
    unsigned int _userExtraDataCount;
    CDUnion_1678db3a _kdebugEvent;
    unsigned int _kdebugArgumentCount;
    unsigned int _counterEventCount;
    unsigned long long _timestamp;
    unsigned long long _tid;
    unsigned long long _dispatchQueue;
    unsigned long long *_supervisorFramesAndExtraData;
    unsigned long long *_userFramesAndExtraData;
    unsigned long long _kdebugStringUUID;
    NSString *_kdebugString;
    unsigned long long *_counterEventValues;
}

+ (id)dtkpRecordFromCPRecord:(struct _CPRecord *)arg1;
@property(nonatomic) unsigned long long *counterEventValues; // @synthesize counterEventValues=_counterEventValues;
@property(nonatomic) unsigned int counterEventCount; // @synthesize counterEventCount=_counterEventCount;
@property(retain, nonatomic) NSString *kdebugString; // @synthesize kdebugString=_kdebugString;
@property(nonatomic) unsigned long long kdebugStringUUID; // @synthesize kdebugStringUUID=_kdebugStringUUID;
@property(nonatomic) unsigned int kdebugArgumentCount; // @synthesize kdebugArgumentCount=_kdebugArgumentCount;
@property(nonatomic) CDUnion_1678db3a kdebugEvent; // @synthesize kdebugEvent=_kdebugEvent;
@property(nonatomic) unsigned long long *userFramesAndExtraData; // @synthesize userFramesAndExtraData=_userFramesAndExtraData;
@property(nonatomic) unsigned int userExtraDataCount; // @synthesize userExtraDataCount=_userExtraDataCount;
@property(nonatomic) unsigned int userFrameCount; // @synthesize userFrameCount=_userFrameCount;
@property(nonatomic) unsigned long long *supervisorFramesAndExtraData; // @synthesize supervisorFramesAndExtraData=_supervisorFramesAndExtraData;
@property(nonatomic) unsigned int supervisorExtraDataCount; // @synthesize supervisorExtraDataCount=_supervisorExtraDataCount;
@property(nonatomic) unsigned int supervisorFrameCount; // @synthesize supervisorFrameCount=_supervisorFrameCount;
@property(nonatomic) unsigned long long dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int threadState; // @synthesize threadState=_threadState;
@property(nonatomic) unsigned long long tid; // @synthesize tid=_tid;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned int cpuNumber; // @synthesize cpuNumber=_cpuNumber;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int triggerID; // @synthesize triggerID=_triggerID;
@property(nonatomic) unsigned int recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;
- (id)detailedDescription;
- (id)description;
- (void)clear;
@property(readonly, nonatomic) unsigned long long *userExtraData;
@property(readonly, nonatomic) unsigned long long *supervisorExtraData;
- (void)setKDebugArgumentValue:(unsigned long long)arg1 forIndex:(unsigned int)arg2;
@property(nonatomic) unsigned long long *kdebugArguments;
- (void)setKDebugEventValue:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end