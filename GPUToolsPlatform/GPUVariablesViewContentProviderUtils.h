//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUVariablesViewContentProviderUtils : NSObject
{
}

+ (void)addMinAvgMaxPerItemToList:(id)arg1 withTitle:(id)arg2 timingTimeMin:(double)arg3 timingTimeMax:(double)arg4 timingTimeAverage:(double)arg5 andCount:(double)arg6 andDYPStateCreationBlock:(CDUnknownBlockType)arg7;
+ (void)addMinAvgMaxToList:(id)arg1 withTitle:(id)arg2 timingTimeMin:(double)arg3 timingTimeMax:(double)arg4 timingTimeAverage:(double)arg5 timingPercentageMin:(double)arg6 timingPercentageMax:(double)arg7 timingPercentageAverage:(double)arg8 andDYPStateCreationBlock:(CDUnknownBlockType)arg9;
+ (id)formatPerfDescription:(double)arg1 timingPercentageAverage:(double)arg2 timingBaseTimeAverage:(double)arg3 resultsUpdated:(BOOL)arg4;

@end