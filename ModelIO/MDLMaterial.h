//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration>
{
    NSMutableArray *_userProperties;
    NSMutableArray *_builtinProperties;
    MDLScatteringFunction *_scatteringFunction;
    NSString *_name;
    MDLMaterial *_baseMaterial;
}

@property(retain, nonatomic) MDLMaterial *baseMaterial; // @synthesize baseMaterial=_baseMaterial;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) struct BidirectionalScatteringDistributionFunction *bsdf;
- (void)removeAllProperties;
- (void)removeProperty:(id)arg1;
- (void)setProperty:(id)arg1;
- (id)propertyWithSemantic:(unsigned long long)arg1;
- (id)propertyNamed:(id)arg1;
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution *)arg2;
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;
- (id)init;
- (void)setScatteringFunction:(id)arg1;
@property(readonly, retain, nonatomic) MDLScatteringFunction *scatteringFunction;

@end