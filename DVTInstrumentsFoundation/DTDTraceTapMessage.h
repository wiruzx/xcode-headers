//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTDTraceTapMessage : DTTapMessage <NSCoding>
{
    NSDictionary *_runningMetadata;
}

@property(copy, nonatomic) NSDictionary *runningMetadata; // @synthesize runningMetadata=_runningMetadata;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp;
@property(nonatomic) unsigned int code;
- (void)setSessionMetadata:(id)arg1;
- (id)sessionMetadata;
@property(nonatomic) unsigned int tapVersion;

@end