//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol DVTEditor;
@protocol DVTInvalidation;
@class DVTExtension;
@class DVTStackBacktrace;

@interface DVTViewController : NSViewController <DVTEditor, DVTInvalidation>
{
    NSWindow *_kvoWindow;
    BOOL _isInstalled;
    BOOL _isViewLoaded;
    DVTExtension *_representedExtension;
}

+ (id)keyPathsForValuesAffectingParentWindowController;
+ (id)keyPathsForValuesAffectingMainViewControllerInParentWindow;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (void)initialize;
@property(retain, nonatomic) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
@property BOOL isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
//- (void).cxx_destruct;
- (void)_interposeViewControllerNotifyingLifecycleMethodsIfNecessaryForView:(id)arg1;
- (void)_checkKvoWindow;
- (id)_kvoWindow;
@property(readonly) NSWindowController *parentWindowController;
@property(readonly) DVTViewController *mainViewControllerInParentWindow;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)_windowWillClose:(id)arg1;
- (void)_viewDidMoveToSuperView;
- (void)_viewDidMoveToWindow;
- (void)_viewWillChangeSuperview;
- (void)_viewWillChangeWindow;
- (void)_viewWillUninstall;
- (void)_viewDidInstall;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
@property(retain) NSView *view;
- (void)separateKeyViewLoops;
- (BOOL)delegateFirstResponder;
- (id)supplementalMainViewController;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initUsingDefaultNib;
- (void)dvtViewController_commonInit;
@property(readonly) BOOL canBecomeMainViewController;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end