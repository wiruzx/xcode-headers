//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPropertyValueDefinition : NSObject
{
    NSString *_value;
    id _commandLineArgs;
    NSString *_localizedValue;
    NSString *_localizedDescription;
    TSPropertyListDictionary *_properties;
}

- (id)valueForUndefinedKey:(id)arg1;
- (id)properties;
- (id)localizedDescription;
- (id)localizedValue;
- (id)value;
- (id)commandArgumentGenerationInfo;
- (void)dealloc;
- (id)initFromPListDictionary:(id)arg1 forPropertyName:(id)arg2;

@end