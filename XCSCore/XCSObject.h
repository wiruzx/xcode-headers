//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSObject : NSObject <XCSDocumentProtocol>
{
    BOOL _skipValidation;
    BOOL _skipBindHierarchy;
    XCSService *_service;
    NSString *_classString;
    NSDictionary *_infoSaved;
    NSMutableDictionary *_infoModified;
    NSMutableDictionary *_infoRemoved;
}

+ (BOOL)_verifyInfoParameter:(id)arg1 allowEmptyDictionary:(BOOL)arg2 validationErrors:(id *)arg3;
+ (id)objectsFromDictionaries:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
+ (void)_setupObservablePropertiesForClass:(Class)arg1;
+ (void)_setupAccessorsForClass:(Class)arg1;
+ (void)initialize;
@property(nonatomic) BOOL skipBindHierarchy; // @synthesize skipBindHierarchy=_skipBindHierarchy;
@property(nonatomic) BOOL skipValidation; // @synthesize skipValidation=_skipValidation;
@property(retain, nonatomic) NSMutableDictionary *infoRemoved; // @synthesize infoRemoved=_infoRemoved;
@property(retain, nonatomic) NSMutableDictionary *infoModified; // @synthesize infoModified=_infoModified;
@property(retain, nonatomic) NSDictionary *infoSaved; // @synthesize infoSaved=_infoSaved;
@property(retain, nonatomic) NSString *classString; // @synthesize classString=_classString;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)_instantiateInfoRemovedIfNeeded;
- (id)_instantiateInfoModifiedIfNeeded;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)_validateID:(id)arg1 rev:(id)arg2 tinyID:(id)arg3 docType:(id)arg4;
- (void)_resetContainersToSavedState;
- (id)_iterate:(id)arg1 withSelector:(SEL)arg2;
- (id)_dateFromProperty:(id)arg1;
- (void)_setObjectInfoSavedWithDictionary:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithID:(id)arg1 rev:(id)arg2 tinyID:(id)arg3 docType:(id)arg4 service:(id)arg5 skipValidation:(BOOL)arg6 skipBindHierarchy:(BOOL)arg7;
- (id)initWithID:(id)arg1 rev:(id)arg2 tinyID:(id)arg3 docType:(id)arg4 service:(id)arg5;
- (void)revert;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)patchRepresentation;
- (id)saveRepresentation;
- (id)internalProperties;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) NSDictionary *contents;
- (id)json;
@property(retain, nonatomic) NSString *docType; // @dynamic docType;
@property(retain, nonatomic) NSString *tinyID; // @dynamic tinyID;
@property(retain, nonatomic) NSString *revision; // @dynamic revision;
@property(retain, nonatomic) NSString *ID; // @dynamic ID;
- (id)initWithContents:(id)arg1 service:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)_invocationValueForPropertyName:(id)arg1 type:(id)arg2 invocation:(id)arg3;
- (void)_objectValueForPropertyName:(id)arg1 type:(id)arg2 invocation:(id)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end