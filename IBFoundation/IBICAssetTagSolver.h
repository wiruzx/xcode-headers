//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICAssetTagSolver : NSObject
{
    IBMutableIdentityDictionary *_cachedCumulativePropigatedTags;
    IBMutableIdentityDictionary *_cachedAcceptedTags;
    NSDictionary *_adornersByAndornees;
    NSSet *_solutionSpace;
}

@property(readonly) NSSet *solutionSpace; // @synthesize solutionSpace=_solutionSpace;
- (void).cxx_destruct;
- (id)cumulativeTagsPropigatedToItem:(id)arg1;
- (id)cumulativeTagsPropigatedByItem:(id)arg1;
- (id)acceptedTagsForItem:(id)arg1;
- (id)setByUnioningTags:(id)arg1 withLocalTagsFromItem:(id)arg2;
- (id)adornersForAdornee:(id)arg1;
- (id)initWithSolutionSpace:(id)arg1 error:(id *)arg2;

@end