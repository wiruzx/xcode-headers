//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTStackBacktrace : NSObject
{
    unsigned long long *_returnAddresses;
    unsigned long long _returnAddressesCount;
    unsigned long long _hash;
}

+ (unsigned long long *)_callStackReturnAddressesExcludingTopFrames:(unsigned long long)arg1 returningCount:(unsigned long long *)arg2;
+ (unsigned long long *)_callStackReturnAddressesFromNumbers:(id)arg1 excludingTopFrames:(unsigned long long)arg2 returningCount:(unsigned long long *)arg3;
+ (id)currentStackBacktraceStartingFromFrame:(long long)arg1;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
+ (id)symbolNameFromRawSymbolName:(id)arg1;
- (id)callStackReturnAddresses;
- (id)_cachedFrameForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef *)arg2;
- (id)symbolicatedStackBacktraceFrames;
- (id)stringRepresentationWithAddresses:(BOOL)arg1;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCallStackReturnAddresses:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end