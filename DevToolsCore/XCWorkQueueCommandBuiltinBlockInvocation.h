//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCWorkQueueCommandBuiltinBlockInvocation : XCWorkQueueCommandBuiltinInvocation
{
    CDUnknownBlockType _block;
}

- (int)runTaskWithArguments:(id)arg1 environment:(id)arg2 workingDirectoryPath:(id)arg3;
- (void)finalize;
- (void)dealloc;
- (id)initWithSlotNumber:(unsigned long long)arg1 workQueueOperation:(id)arg2 workQueueCommand:(id)arg3 arguments:(id)arg4 environment:(id)arg5 workingDirectoryPath:(id)arg6 block:(CDUnknownBlockType)arg7;

@end