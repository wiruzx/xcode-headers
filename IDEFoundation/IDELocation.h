//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELocation : NSObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSDate *_time;
    NSNumber *_speed;
    NSNumber *_course;
    IDELocationScenario *_scenario;
}

@property(readonly) IDELocationScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly) NSNumber *course; // @synthesize course=_course;
@property(readonly) NSNumber *speed; // @synthesize speed=_speed;
@property(readonly) NSDate *time; // @synthesize time=_time;
@property(readonly) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(readonly) NSNumber *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (BOOL)hasSameCoordinateAs:(id)arg1;
- (id)description;
- (id)locationWithSpeed:(id)arg1 course:(id)arg2;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 time:(id)arg3 speed:(id)arg4 course:(id)arg5;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 time:(id)arg3;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2;

@end