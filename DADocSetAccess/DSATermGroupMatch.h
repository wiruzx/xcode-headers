//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DSATermGroupMatch : DSATermMatch
{
    unsigned int *_termIDs;
    float *_scores;
    unsigned long long _numberOfTerms;
}

- (float)scoreForTermID:(unsigned int)arg1;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)initForTermMatches:(id)arg1;

@end