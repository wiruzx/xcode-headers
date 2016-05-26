//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEEntitlementsProcessorViewController : IDEDistributionOptionsSliceViewController
{
    NSDictionary *_itemToProcessorMap;
}

+ (Class)correspondingProcessorClass;
+ (Class)viewControllerClassForEntitlementsProcessorClass:(Class)arg1;
@property(readonly, nonatomic) NSDictionary *itemToProcessorMap; // @synthesize itemToProcessorMap=_itemToProcessorMap;
- (void).cxx_destruct;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)needsInteraction;
- (void)_createProcessors;
- (id)initWithContext:(id)arg1;

@end