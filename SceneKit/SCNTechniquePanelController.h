//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNTechniquePanelController : NSObject
{
    SCNView *_3dView;
    SCNTechniquePanel *_panel;
    NSPopUpButton *_passes;
    NSPopUpButton *_target;
    SCNRenderTargetView *_targetView;
}

- (void)reParsePasses;
- (void)selectTarget:(id)arg1;
- (struct __C3DTexture *)currentTexture;
- (void)selectPass:(id)arg1;
- (void)updateTargets;
- (void)setOpenGLContext:(id)arg1;
- (void)close:(id)arg1;
@property(retain) SCNView *view;
- (id)panel;
- (struct __C3DFXContext *)fxContext;
- (struct __C3DRendererContext *)rendererContext;
- (struct __C3DEngineContext *)context;
- (void)techniquesDidUpdate:(id)arg1;
- (void)sceneDidChange;
- (void)dealloc;
- (id)init;

@end