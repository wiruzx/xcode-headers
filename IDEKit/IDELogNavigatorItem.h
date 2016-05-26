//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELogNavigatorItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _updatingItems;
    IDEEntityIdentifier *_entityIdentifier;
    NSArray *_items;
    IDEWorkspace *_workspace;
    NSString *_name;
    NSImage *_image;
    CDUnknownBlockType _updateBlock;
    NSArray *_cachedItems;
    NSArray *_observationTokens;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (void)initialize;
@property(retain, nonatomic) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(nonatomic) BOOL updatingItems; // @synthesize updatingItems=_updatingItems;
@property(retain, nonatomic) NSArray *cachedItems; // @synthesize cachedItems=_cachedItems;
@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) IDEEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)isEqualToIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly, nonatomic) long long navigableItem_progressValue; // @dynamic navigableItem_progressValue;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation; // @dynamic navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType; // @dynamic navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image; // @dynamic navigableItem_image;
@property(readonly) NSString *navigableItem_name; // @dynamic navigableItem_name;
- (void)_updateItemsUsingSchemeLogRecords;
- (void)update;
- (id)initWithName:(id)arg1 image:(id)arg2 workspace:(id)arg3 activityLogUpdateBlock:(CDUnknownBlockType)arg4;
- (id)initWithEntityIdentifier:(id)arg1 workspace:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end