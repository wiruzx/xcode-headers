//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AddParamTransform : Transform
{
    BOOL _seenFunctionBody;
}

- (BOOL)performPerFile;
- (BOOL)checkPerFile;
- (BOOL)checkFinal;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;

@end