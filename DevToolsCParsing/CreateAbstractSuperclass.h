//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CreateAbstractSuperclass : Transform
{
    BOOL _foundInterface;
    BOOL _foundImplementation;
    BOOL _createNewFiles;
    NSString *_newHeaderName;
}

- (BOOL)performPerFile;
- (BOOL)checkFinal;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;

@end