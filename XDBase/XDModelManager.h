//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDModelManager : NSObject
{
    XDProject *_xdproject;
    NSMutableDictionary *_models;
    NSString *_name;
    NSMutableArray *_modelReferences;
}

+ (Class)modelClassType;
+ (id)managerTypeString;
+ (id)sharedModelInProject:(id)arg1;
+ (id)sharedInstanceInProject:(id)arg1;
- (id)newModelWithName:(id)arg1;
- (id)modelForName:(id)arg1;
- (void)removeModel:(id)arg1;
- (void)addModel:(id)arg1;
- (id)models;
- (id)xdproject;
- (void)setName:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 inProject:(id)arg2;
- (id)modelReferenceForName:(id)arg1;
- (void)removeModelReference:(id)arg1;
- (void)addModelReference:(id)arg1;
- (id)modelReferences;

@end