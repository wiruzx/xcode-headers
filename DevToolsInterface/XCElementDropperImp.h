//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCElementDropperImp : XCElementImp <XCElementDropperP>
{
    long long _thick;
}

- (BOOL)dropElement:(struct NSObject *)arg1 at:(struct CGPoint)arg2;
- (id)_createSurroundingElement:(id)arg1 vertical:(BOOL)arg2 preceding:(BOOL)arg3;
- (BOOL)validate;
- (struct NSObject *)dropElement;
- (void)drawOwnForeground:(struct CGRect)arg1;
- (id)initInMain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end