//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTExtensionPointDescription : DTModelObjectDescription
{
}

- (void)_finishConfigurationWithSelfElement;
- (id)childExtensionPointDescriptions;
- (id)parentExtensionPointDescription;
- (id)extensionSchema;
- (void)setExtensionSchema:(id)arg1;
- (id)plugInDescription;
- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)willSave;
- (void)awakeFromFetch;
- (id)extensionDescriptions;
- (id)extensionProtocolName;
- (id)extensionClassName;
- (id)_findParentByIdentifier;
- (void)_connectParentExtensionPointRelationship;
- (id)_parentExtensionPointIdentifier;

@end