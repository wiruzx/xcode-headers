//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRecruiterMessageEnumerator : NSEnumerator
{
    int _pos;
    NSData *_buf;
}

+ (id)enumeratorWithEncodedMessageData:(id)arg1;
- (id)allObjects;
- (id)remainingData;
- (id)nextObject;
- (id)initWithEncodedMessageData:(id)arg1;
- (void)dealloc;
- (id)init;

@end