//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol GTFActionTimelineInfoDelegate <NSObject>
- (BOOL)isTrackLastInOverview:(int)arg1;
- (BOOL)shouldShowGroupControl;
- (void)trackHeightChanged:(int)arg1;
- (int)getNumTracks;
- (double)getActionYCoordinateForTrack:(int)arg1;
- (int)getTrackFromPoint:(struct CGPoint)arg1;
- (double)getTimeForXCoord:(double)arg1;
- (double)getTrackEndTime:(int)arg1;
- (double)getMinXCoordForAction;
- (double)getTimelineOffset;
- (double)getTimeScale;
@end