//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCAppleScriptBuildSetting : NSObject
{
    NSString *_name;
    NSString *_tempValue;
    id _container;
}

- (id)objectSpecifier;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 andContainer:(id)arg2;
- (id)init;

@end