//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GTFActionModel : NSObject <NSCoding, NSCopying, IDEKeyDrivenNavigableItemRepresentedObject>
{
    GTFActionModelGroup *_ownerGroup;
    int _track;
    int _groupId;
    double _startTime;
    double _duration;
    GTFActionTimelineModel *_ownerTimeline;
    double _notedStartTime;
    long long _timingMode;
    double _customData1;
    double _customData2;
    double _customData3;
    double _customData4;
    NSArray *_customStringArray1;
}

+ (id)actionWithSCNAction:(id)arg1;
+ (id)actionReferenceWithName:(id)arg1;
+ (id)actionAnimateWithTextures:(id)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3;
+ (id)actionUnhide;
+ (id)actionHide;
+ (id)actionPlaySoundFileNamed:(id)arg1;
+ (id)actionFadeAlphaTo:(double)arg1;
+ (id)actionFadeIn;
+ (id)actionFadeOut;
+ (id)actionRotateToAngle:(double)arg1;
+ (id)actionRotateByAngle:(double)arg1;
+ (id)actionResizeByWidth:(double)arg1 height:(double)arg2;
+ (id)actionResizeToHeight:(double)arg1;
+ (id)actionResizeToWidth:(double)arg1;
+ (id)actionResizeToWidth:(double)arg1 height:(double)arg2;
+ (id)actionScaleTo:(double)arg1;
+ (id)actionScaleBy:(double)arg1;
+ (id)actionMoveToX:(double)arg1 y:(double)arg2;
+ (id)actionMoveByX:(double)arg1 y:(double)arg2;
+ (id)keyPathsForValuesAffectingInspectorCustomStringArray1;
+ (id)keyPathsForValuesAffectingInspectorCustomData4;
+ (id)keyPathsForValuesAffectingInspectorCustomData3;
+ (id)keyPathsForValuesAffectingInspectorCustomData2;
+ (id)keyPathsForValuesAffectingInspectorCustomData1;
+ (id)keyPathsForValuesAffectingInspectorTimingMode;
+ (id)keyPathsForValuesAffectingInspectorDuration;
+ (id)keyPathsForValuesAffectingInspectorStartTime;
@property(retain, nonatomic) NSArray *customStringArray1; // @synthesize customStringArray1=_customStringArray1;
@property(nonatomic) double customData4; // @synthesize customData4=_customData4;
@property(nonatomic) double customData3; // @synthesize customData3=_customData3;
@property(nonatomic) double customData2; // @synthesize customData2=_customData2;
@property(nonatomic) double customData1; // @synthesize customData1=_customData1;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long timingMode; // @synthesize timingMode=_timingMode;
@property(nonatomic) double notedStartTime; // @synthesize notedStartTime=_notedStartTime;
@property(nonatomic) __weak GTFActionTimelineModel *ownerTimeline; // @synthesize ownerTimeline=_ownerTimeline;
- (void).cxx_destruct;
- (void)reverse;
- (id)getSCNAction;
- (id)getSKAction;
@property(readonly, nonatomic) NSString *actionInfoString;
@property(readonly, nonatomic) NSColor *actionColor;
@property(readonly, nonatomic) NSString *actionName;
@property(readonly, nonatomic) long long actionType;
@property(readonly, nonatomic) NSArray *nav_children;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) NSString *navigableItem_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL canMove;
@property(readonly, nonatomic) BOOL isInGroup;
- (void)undoGroupRelativity;
- (void)adjustRelativity:(double)arg1;
- (void)makeRelativeForGroup;
- (void)setDuration:(double)arg1 verifyWithTimeline:(BOOL)arg2 enableSnapping:(BOOL)arg3;
- (void)setStartTime:(double)arg1 verifyWithTimeline:(BOOL)arg2 enableAllignment:(BOOL)arg3;
- (void)setTrack:(int)arg1 verifyWithTimeline:(BOOL)arg2;
- (void)removeFromGroup;
@property(nonatomic) __weak GTFActionModelGroup *ownerGroup;
@property(readonly, nonatomic) double relativeEndTime;
@property(readonly, nonatomic) double relativeStartTime;
@property(readonly, nonatomic) double endTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int track; // @synthesize track=_track;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSArray *inspectorCustomStringArray1;
@property(nonatomic) double inspectorCustomData4;
@property(nonatomic) double inspectorCustomData3;
@property(nonatomic) double inspectorCustomData2;
@property(nonatomic) double inspectorCustomData1;
@property(nonatomic) long long inspectorTimingMode;
@property(nonatomic) double inspectorDuration;
@property(nonatomic) double inspectorStartTime;
@property(nonatomic) double angleZ;
@property(nonatomic) double angleY;
@property(nonatomic) double angleX;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end