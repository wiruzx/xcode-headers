//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBLayoutGuideApplicationState : NSObject
{
    IBLayoutCoordinateApplicationState *x;
    IBLayoutCoordinateApplicationState *y;
}

@property(readonly) IBLayoutCoordinateApplicationState *y; // @synthesize y;
@property(readonly) IBLayoutCoordinateApplicationState *x; // @synthesize x;
- (void).cxx_destruct;
@property(readonly) NSSet *allLayoutGuideMatches;
@property(readonly) NSArray *allGuides;
- (id)initWithXCoordinateState:(id)arg1 andYCoordinateState:(id)arg2;

@end