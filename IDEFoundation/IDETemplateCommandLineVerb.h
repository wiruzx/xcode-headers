//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETemplateCommandLineVerb : IDECommandLineVerb
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;
+ (id)templateIdentifiersOfKind:(id)arg1 forPlatform:(id)arg2;
+ (id)templateDescriptionsOfKind:(id)arg1 forPlatform:(id)arg2;
+ (void)emitSimpleList:(id)arg1 withSeparator:(id)arg2 toFileHandle:(id)arg3;
+ (void)emitJSONForPropertyList:(id)arg1 toFileHandle:(id)arg2;
+ (id)platformForString:(id)arg1;
+ (id)shortIdentifierForPlatform:(id)arg1;
+ (id)templateKindForTemplateTypeString:(id)arg1;
- (id)findTemplateFromIdentifier:(id)arg1 ofKind:(id)arg2 requestedPlatform:(id *)arg3;

@end