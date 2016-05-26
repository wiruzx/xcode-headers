//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport>
{
    SCNScene *_scene;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *__renderingQueue;
    unsigned long long __antialiasingMode;
    struct {
        struct __C3DFramebuffer *frameBuffer;
        struct __C3DFramebuffer *multisamplingFrameBuffer;
        struct CGSize drawableSize;
    } _framebufferInfo;
    id _mtlTexture;
    unsigned int _shouldDeleteFramebuffer:1;
    unsigned int _pointOfViewWasSet:1;
    unsigned int _isPrivateRenderer:1;
    unsigned int _isViewPrivateRenderer:1;
    unsigned int _doingSnapshot:1;
    unsigned int _isLayerPrivateRenderer:1;
    unsigned int _contextIsDoubleBuffered:1;
    double _currentSceneTime;
    double _currentSystemTime;
    double _deltaTime;
    double _forceSystemTime;
    double _lastSystemTime;
    double __nextFrameTime;
    SCNRendererTransitionContext *_transitionContext;
    BOOL _playing;
    BOOL _isAnimating;
    BOOL _loops;
    id _delegate;
    struct __C3DEngineContext *_engineContext;
    unsigned long long _renderingAPI;
    struct SCNVector4 __viewport;
    struct _CGLContextObject *_glContext;
    NSOpenGLContext *__openGLContext;
    id <SCNRenderContext> _renderContext;
    unsigned int _jitteringEnabled:1;
    unsigned int _frozen:1;
    unsigned int _delegateSupportsWillRender:1;
    unsigned int _delegateSupportsDidRender:1;
    unsigned int _delegateSupportsDidApplyAnimations:1;
    unsigned int _delegateSupportsUpdate:1;
    unsigned int _delegateSupportsDidSimulatePhysics:1;
    NSColor *_backgroundColor;
    struct C3DColor4 _c3dBackgroundColor;
    SCNNode *_pointOfView;
    SCNRenderer *_preloadRenderer;
    id <SCNSceneRenderer> _privateRendererOwner;
    SCNTechnique *_technique;
    __SKSCNRenderer *_overlayRenderer;
    id _overlayScene;
    BOOL _disableOverlays;
    BOOL _showStatistics;
    double _statisticsTimeStamp;
}

+ (id)rendererWithContext:(struct _CGLContextObject *)arg1 options:(id)arg2;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
- (void)set_viewport:(struct SCNVector4)arg1;
- (struct SCNVector4)_viewport;
- (id)_authoringEnvironment;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
@property(nonatomic) unsigned long long debugOptions;
- (id)initOffscreenRendererWithSize:(struct CGSize)arg1 options:(id)arg2;
- (struct CGImage *)copySnapshotWithSize:(struct CGSize)arg1;
- (void)_jitterAtStep:(unsigned long long)arg1 updateMainFramebuffer:(BOOL)arg2 redisplay:(BOOL)arg3 jitterer:(id)arg4;
- (void)_presentFramebuffer;
@property(nonatomic) BOOL showsStatistics;
- (void)_displayLinkStatsTack;
- (void)_displayLinkStatsTick;
- (void)setFrozen:(BOOL)arg1;
- (BOOL)frozen;
- (BOOL)jitteringEnabled;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
- (void)_detachTexture:(id)arg1;
- (void)_attachTexture:(id)arg1;
@property(nonatomic) BOOL loops;
@property(getter=isPlaying) BOOL playing;
- (void)_stop;
- (void)_pause;
- (void)_play;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (id)_nodesInsideFrustumWithPointOfView:(id)arg1 viewport:(struct CGSize)arg2;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (BOOL)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(struct CGSize)arg3;
- (id)_hitTest:(struct CGPoint)arg1 viewport:(struct CGSize)arg2 options:(id)arg3;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (id)_snapshotWithImageSize:(struct CGSize)arg1 backingSize:(struct CGSize)arg2;
- (void)render;
- (void)_render;
- (void)_renderAtTime:(double)arg1;
- (void)_drawOverlaySceneAtTime:(double)arg1;
- (void)_draw;
- (void)_drawScene:(struct __C3DScene *)arg1;
- (BOOL)_drawSceneWithLegacyRenderer:(struct __C3DScene *)arg1;
- (void)updateAndDrawStatisticsIfNeeded;
- (BOOL)_drawSceneWithNewRenderer:(struct __C3DScene *)arg1;
- (void)_renderScene:(struct __C3DEngineContext *)arg1 sceneTime:(double)arg2;
- (void)_drawWithJitteringPresentationMode;
- (void)_updateWithSystemTime:(double)arg1;
- (void)_update:(struct __C3DScene *)arg1 rendererContext:(struct __C3DRendererContext *)arg2;
- (void)_setOpenGLContext:(id)arg1 madeWithPixelFormat:(id)arg2;
- (id)_openGLContext;
@property(readonly, nonatomic) void *context;
- (void)setContext:(struct _CGLContextObject *)arg1;
- (void)set_deltaTime:(double)arg1;
- (void)set_systemTime:(double)arg1;
- (double)_systemTime;
@property(nonatomic) double sceneTime;
- (void)_setSceneTime:(double)arg1;
@property(nonatomic) double currentTime;
- (BOOL)_needsRepetitiveRedraw;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5;
- (void)_renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 commandBuffer:(id)arg6;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (void)renderAtTime:(double)arg1;
@property(readonly, nonatomic) double nextFrameTime;
- (double)_nextFrameTime;
- (void)set_nextFrameTime:(double)arg1;
- (void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
- (void)_updateEngineCallbacks;
- (id)programWithNode:(id)arg1 withMaterial:(id)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (BOOL)_preloadResource:(id)arg1 abortHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (id)_prepareSKRenderer;
- (id)_setupSKRendererIfNeeded;
- (void)setDisableOverlays:(BOOL)arg1;
- (BOOL)disableOverlays;
- (struct C3DColor4 *)_backgroundColorComponents;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) SCNScene *scene;
- (void)setScene:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_prepareForTransition:(id)arg1 outgoingScene:(id)arg2 outgoingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updatePointOfView;
- (id)_defaultPOVForScene:(id)arg1;
- (BOOL)autoAdjustCamera;
- (void)setAutoAdjustCamera:(BOOL)arg1;
- (void)_willRenderScene:(id)arg1;
- (void)_didRenderScene:(id)arg1;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)_unprojectPoint:(struct SCNVector3)arg1 viewport:(struct CGSize)arg2;
- (struct SCNVector3)_projectPoint:(struct SCNVector3)arg1 viewport:(struct CGSize)arg2;
- (void)_projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2 viewport:(struct CGSize)arg3;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL autoenablesDefaultLighting;
- (void *)__CFObject;
- (struct __C3DRendererContext *)_rendererContext;
- (struct __C3DEngineContext *)_engineContext;
- (void)set_antialiasingMode:(unsigned long long)arg1;
- (unsigned long long)_antialiasingMode;
- (unsigned long long)_sampleCount;
- (void)_createFramebufferIfNeeded;
- (void)_resolveAndDiscard;
- (void)_unbindFramebuffer;
- (void)_bindFramebuffer:(BOOL)arg1;
- (void)_deleteFramebuffer;
- (void)_invalidateFramebuffer;
- (void)_setBackingSize:(struct CGSize)arg1;
- (double)_contentsScaleFactor;
- (void)_clearBuffers;
- (void)_acquireCurrentViewport;
- (void)_installViewport;
- (BOOL)_installContext;
- (id)_renderingQueue;
- (void)unlock;
- (void)lock;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
@property(readonly, nonatomic) unsigned long long renderingAPI;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)_initWithOptions:(id)arg1 isPrivateRenderer:(BOOL)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(BOOL)arg4 context:(void *)arg5 renderingAPI:(unsigned long long)arg6;
- (void)setupForDeprecatedOffscreenRenderer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end