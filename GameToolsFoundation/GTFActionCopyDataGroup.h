//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GTFActionCopyDataGroup : NSObject <NSCoding>
{
    NSMutableArray *_actions;
    int _loopCount;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)setType:(long long)arg1;
- (void)setLoopCount:(int)arg1;
@property(readonly, nonatomic) NSMutableArray *actionsMutable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end