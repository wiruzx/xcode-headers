//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETestNavigatorModel : NSObject <IDETestsInTestableObserver, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDETestManager *_testManager;
    CDUnknownBlockType _viewUpdater;
    DVTObservingToken *_testableOriginObservingToken;
    DVTObservingToken *_activeRunContextObservingToken;
    DVTObservingToken *_loadingCompleteObservingToken;
    BOOL _filteringByScheme;
    BOOL _loadingComplete;
    NSArray *_orderedTestables;
}

+ (id)keyPathsForValuesAffectingModelItems;
@property(nonatomic) BOOL loadingComplete; // @synthesize loadingComplete=_loadingComplete;
@property(nonatomic) BOOL filteringByScheme; // @synthesize filteringByScheme=_filteringByScheme;
@property(copy) NSArray *orderedTestables; // @synthesize orderedTestables=_orderedTestables;
- (void).cxx_destruct;
@property(readonly) NSString *navigableItem_name;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)_stopMonitoringTests;
- (void)_startMonitoringTests:(CDUnknownBlockType)arg1;
- (void)_updateObservedTestables;
- (id)modelItems;
- (id)ideModelObjectTypeIdentifier;
- (void)_setupLoadingCompleteObservation;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end