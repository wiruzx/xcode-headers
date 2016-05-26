//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSLocalIntegration (IDE) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem, XCSLocalIntegration>
+ (id)keyPathsForValuesAffectingProgressValue;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingShortTitle;
+ (id)keyPathsForValuesAffectingSubtitle;
- (void)menuCmd_viewIntegrationInBrowser:(id)arg1;
- (void)menuCmd_viewBotInBrowser:(id)arg1;
- (void)menuCmd_deleteIntegration:(id)arg1;
- (void)menuCmd_cancelIntegration:(id)arg1;
- (void)menuCmd_cleanAndIntegrate:(id)arg1;
- (void)menuCmd_integrate:(id)arg1;
- (void)integrateBotAndClean:(BOOL)arg1 navigator:(id)arg2;
- (BOOL)allowsAction:(SEL)arg1;
- (long long)progressValue;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)timestamp;
@property(readonly, nonatomic) NSImage *image;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)title;
- (id)shortTitle;
- (id)startedTimeDisplayString;
@property(readonly, nonatomic) NSString *subtitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end