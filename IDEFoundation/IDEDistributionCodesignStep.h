//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDistributionCodesignStep : IDEDistributionItemProcessingStep
{
}

+ (_Bool)runsPerThinningVariant;
+ (_Bool)supportsDryRun;
- (_Bool)runWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end