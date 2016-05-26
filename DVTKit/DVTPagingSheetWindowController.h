//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPagingSheetWindowController : NSWindowController <DVTInvalidation>
{
    DVTViewController *_currentPageViewController;
    CDUnknownBlockType _completionBlock;
}

+ (BOOL)automaticallyNotifiesObserversOfCurrentPageViewController;
+ (void)initialize;
+ (id)defaultWindowNibName;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DVTViewController *currentPageViewController; // @synthesize currentPageViewController=_currentPageViewController;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)configureWindowForContentView:(id)arg1;
- (void)didEndSheetWithReturnCode:(long long)arg1;
- (void)willBeginSheet;
@property(retain, nonatomic) Class currentPageViewControllerClass;
- (void)primitiveInvalidate;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end