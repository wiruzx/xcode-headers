//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSLocalService (IDE) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem, XCSServiceErrorDelegate, XCSLocalService>
+ (id)serviceURLWithoutNavigableScheme:(id)arg1;
+ (id)serviceURLForServer:(id)arg1;
+ (id)keyPathsForValuesAffectingAccountReachability;
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)keyPathsForValuesAffectingItems;
+ (id)keyPathsForValuesAffectingAccountImage;
+ (id)keyPathsForValuesAffectingAccountTitle;
+ (id)keyPathsForValuesAffectingSubtitle;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (long long)navigableItem_progressValue;
- (BOOL)setCurrentUsername:(id)arg1 andPassword:(id)arg2 withError:(id *)arg3;
- (void)deleteKeychainItemForUsername:(id)arg1 andPassword:(id)arg2;
- (void)keychainItemForUsername:(id)arg1 password:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL isReachable;
@property(retain, nonatomic) NSArray *lastKnownPlatforms;
@property(retain, nonatomic) XCSVersionInfo *lastKnownVersionInfo;
@property(retain, nonatomic) NSError *lastKnownConnectionError;
@property BOOL attemptGuestAuthentication;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *displayName;
- (long long)accountReachability;
- (id)botsFilteredToWorkspace;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) NSImage *navigableItem_image;
- (id)items;
- (BOOL)accountEnabled;
- (id)accountImage;
@property(readonly, nonatomic) NSImage *image;
- (id)accountTitle;
- (id)accountSubTitle;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly) NSString *navigableItem_name;
- (id)serverCompatibilityErrorText;
- (id)filterBotsToWorksapce;
- (void)setFilterBotsToWorkspace:(id)arg1;

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