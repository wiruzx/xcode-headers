//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTLineBufferedOutputStream : DTFilterOutputStream
{
    char *_bufferedBytes;
    unsigned long long _numBufferedBytes;
}

- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;

@end