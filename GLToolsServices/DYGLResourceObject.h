//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYGLResourceObject : NSObject <DYResource>
{
    BOOL _isStatic;
    unsigned int _resourceType;
    int _internalID;
    unsigned int _target;
    unsigned long long _containerID;
    unsigned long long _objectID;
    NSString *_label;
    NSMutableDictionary *_properties;
}

+ (id)keyForResourceWithID:(unsigned long long)arg1 type:(unsigned int)arg2 containerID:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned int target; // @synthesize target=_target;
@property(readonly, nonatomic) int internalID; // @synthesize internalID=_internalID;
@property(readonly, nonatomic) BOOL isStatic; // @synthesize isStatic=_isStatic;
@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) unsigned long long containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
- (void).cxx_destruct;
- (id)keyWithSharegroupID:(unsigned long long)arg1;
- (id)streamDictAtFunctionIndex:(unsigned int)arg1;
- (void)processFunction:(const struct Function *)arg1;
- (id)createFullObjectWithFunctionStream:(id)arg1 dataResolver:(CDUnknownBlockType)arg2;
- (id)initWithType:(unsigned int)arg1 properties:(id)arg2;
- (id)initProgram:(unsigned long long)arg1 context:(unsigned long long)arg2 internalID:(int)arg3;
- (id)initRenderbuffer:(unsigned long long)arg1 context:(unsigned long long)arg2 internalID:(int)arg3;
- (id)initTexture:(unsigned long long)arg1 context:(unsigned long long)arg2 target:(unsigned int)arg3 internalID:(int)arg4;
- (id)initBuffer:(unsigned long long)arg1 context:(unsigned long long)arg2 target:(unsigned int)arg3 offset:(long long)arg4 size:(long long)arg5 internalID:(int)arg6;
- (id)initWithResourceObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initUpdateWithType:(unsigned int)arg1 objectID:(unsigned long long)arg2 target:(unsigned int)arg3 containerID:(unsigned long long)arg4 changes:(id)arg5;
- (id)initUpdateWithType:(unsigned int)arg1 objectID:(unsigned long long)arg2 containerID:(unsigned long long)arg3 changes:(id)arg4;
- (id)initWithType:(unsigned int)arg1 objectID:(unsigned long long)arg2 target:(unsigned int)arg3 context:(unsigned long long)arg4 internalID:(unsigned int)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end