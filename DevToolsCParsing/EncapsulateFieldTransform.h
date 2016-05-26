//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface EncapsulateFieldTransform : Transform
{
    NSString *_setterFnPrototype;
    NSString *_getterFnPrototype;
    NSString *_setterFnDefinition;
    NSString *_getterFnDefinition;
    NSString *_setterName;
    NSString *_getterName;
    BOOL _haveInsertedFunctionPrototypes;
    BOOL _haveInsertedFunctionDefinitions;
}

- (BOOL)performFinal;
- (BOOL)performPerFile;
- (void)makeGetterExprFor:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (void)makeSetterExprFor:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (BOOL)performFirstFile;
- (BOOL)checkFinal;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;

@end