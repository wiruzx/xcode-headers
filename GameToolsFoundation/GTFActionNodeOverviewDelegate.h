//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol GTFActionNodeOverviewDelegate <NSObject>

@optional
- (BOOL)isActionFileEditor;
- (void)nodeOverview:(GTFActionNodeOverviewView *)arg1 duplicateNodeTrack:(GTFActionNodeTrackView *)arg2;
- (void)nodeOverview:(GTFActionNodeOverviewView *)arg1 removeNodeTrack:(GTFActionNodeTrackView *)arg2;
@end