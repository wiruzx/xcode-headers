//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEEnergyLogScoreFormatter : NSFormatter
{
    long long _zeroThreshold;
    long long _lowThreshold;
    long long _highThreshold;
}

@property long long highThreshold; // @synthesize highThreshold=_highThreshold;
@property long long lowThreshold; // @synthesize lowThreshold=_lowThreshold;
@property long long zeroThreshold; // @synthesize zeroThreshold=_zeroThreshold;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)greenColor;
- (id)yellowColor;
- (id)redColor;

@end