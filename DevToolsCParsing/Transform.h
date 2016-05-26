//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Transform : NSObject
{
    NSMutableArray *_warningLog;
    NSMutableArray *_errorLog;
    NSMutableArray *_fatalErrorLog;
    TransformInstance *_transformInstance;
    Declaration *_declaration;
    NSDictionary *_paramDictionary;
    BOOL _suppressErrors;
    NSMapTable *_usesSeenStore;
    NSMapTable *_usesSeenThisFileStore;
    NSMapTable *_numberOfUsesSeenStore;
    NSMapTable *_declSitesSeenStore;
    NSMapTable *_declSitesSeenThisFileStore;
    unsigned long long _numberOfFunctionBodiesSeen;
    unsigned long long _numberOfClassesSeen;
    BOOL _hasSimpleErrors;
    NSMutableArray *_subtransforms;
}

+ (BOOL)populateParamDictionary:(id)arg1 project:(id)arg2 error:(id *)arg3;
+ (id)transformDescriptions;
+ (void)registerTransformDescription:(id)arg1;
- (id)transformInstance;
- (id)refactoringErrorString;
- (id)allNewClassesWithInterface;
- (id)allNewClasses;
- (void)doneWithFunctionBodies;
- (BOOL)canFlushFunctionBodiesPerFileIncludingSubtransformations;
- (BOOL)canFlushFunctionBodiesPerFile;
- (id)allNewFunctionBodies;
- (id)allFunctionBodiesReparse;
- (id)allFunctionBodies;
- (BOOL)willSuppressErrors;
- (void)setSuppressErrors:(BOOL)arg1;
- (void)addSubtransform:(id)arg1;
- (BOOL)commit;
- (id)newDeclarationSitesForDeclaration:(id)arg1;
- (id)newUseNodesForDeclaration:(id)arg1;
- (id)getFunctionBodyForFBE:(id)arg1;
- (id)transformRelatedNames;
- (BOOL)performFinal;
- (void)cleanupPerFile;
- (void)cleanupTransformSpecificPerFile;
- (BOOL)performPerFile;
- (BOOL)performFirstFile;
- (BOOL)checkFinal;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)requiredParamDictKeys;
- (void)copyErrorsFromTransform:(id)arg1;
- (void)addSimpleWarningAtLocation:(id)arg1 withFormat:(id)arg2;
- (void)addSimpleErrorAtLocation:(id)arg1 withFormat:(id)arg2;
- (void)addFatalErrorAtLocation:(id)arg1 withFormat:(id)arg2;
- (BOOL)hasSimpleErrors;
- (id)fatalErrorLog;
- (id)errorLog;
- (id)warningLog;
- (id)project;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (int)visibilityInClassInterface:(id)arg1 atLocation:(id)arg2;
- (BOOL)createCurlyBracketsInClass:(id)arg1 andInsertText:(id)arg2;
- (BOOL)deleteDeclarations:(id)arg1;
- (BOOL)deleteDeclaration:(id)arg1;
- (BOOL)renameMethodCalls:(id)arg1 toMethod:(id)arg2 forClass:(id)arg3 includeIds:(BOOL)arg4 includeSubclasses:(BOOL)arg5 newFunctionsOnly:(BOOL)arg6;
- (void)renameMessageExpr:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3;
- (BOOL)checkRenameMethodCalls:(id)arg1 toMethod:(id)arg2 forClass:(id)arg3;
- (BOOL)declaration:(id)arg1 visibleInNewScope:(id)arg2;
- (id)doesDeclNamed:(id)arg1 nameKind:(int)arg2 haveUsesInScope:(id)arg3;
- (id)doesDeclNamed:(id)arg1 replacingDecl:(id)arg2 existInScopeOfUseBefore:(id)arg3;
- (id)allMethodsWithName:(id)arg1 inSubclassesOf:(id)arg2 isClassMethod:(BOOL)arg3;
- (id)allMethodsWithName:(id)arg1 isClassMethod:(BOOL)arg2;
- (id)gatherMessageSends:(id)arg1 onlyForClass:(id)arg2 includeSubclasses:(BOOL)arg3 newFunctionsOnly:(BOOL)arg4;
- (id)gatherSelectorsForMessageName:(id)arg1;
- (id)gatherMessageSendsToId:(id)arg1 newFunctionsOnly:(BOOL)arg2;

@end