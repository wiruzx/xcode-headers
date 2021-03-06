//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYGLShaderProfiler : DYShaderProfiler
{
    BOOL _harvestDrawCallFootprint;
}

+ (BOOL)isDisassemblerAvailable;
+ (BOOL)isFramebufferFetchWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderBeginWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderEndWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
+ (id)_shaderInfoDictForProgram:(unsigned int)arg1 stages:(unsigned int)arg2 contextStateMirror:(ContextStateMirror_c1e8f92a *)arg3 archiveModifier:(id)arg4;
- (void)_addSampleWithPC:(unsigned int)arg1 state:(unsigned int)arg2 drawCallIdx:(unsigned int)arg3 shaderBinary:(id)arg4;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2;
- (id)profileShader:(id)arg1;
- (BOOL)isMultiContext;
- (id)_getShaderList;
- (void)initializeShaderAnalyzer;
- (int)_getRendererType;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end