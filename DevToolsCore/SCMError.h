//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCMError : SCMActivity
{
    int _type;
}

+ (id)errorWithType:(int)arg1 message:(id)arg2;
@property int type; // @synthesize type=_type;
- (id)description;
- (void)addXMLAttributes:(id)arg1;
- (id)createXMLElement;
- (void)dealloc;
- (id)initWithType:(int)arg1 message:(id)arg2;

@end