//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTProductSource : NSObject <DVTInvalidation, NSCopying>
{
    BOOL _busy;
    DVTProductManager *_productManager;
    NSArray *_products;
}

+ (void)initialize;
@property(retain) NSArray *products; // @synthesize products=_products;
@property(retain) DVTProductManager *productManager; // @synthesize productManager=_productManager;
@property(getter=isBusy) BOOL busy; // @synthesize busy=_busy;
- (void).cxx_destruct;
- (void)refreshProducts;
- (void)_startLocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)primitiveInvalidate;
- (id)initWithProductManager:(id)arg1;
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