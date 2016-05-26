//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEMediaResource : NSObject
{
    BOOL _contentValid;
    BOOL _iconValid;
    DVTFileDataType *_contentType;
    DVTFilePath *_sourceFilePath;
    NSString *_name;
    NSString *_explicitNameForFolding;
    NSSet *_applicableFoldingStrategies;
    NSImage *_icon;
    id _content;
    NSMutableSet *_contentRequests;
    NSMutableSet *_iconRequests;
}

+ (id)mediaType;
+ (Class)mediaResourceClassForFileType:(id)arg1;
+ (id)allMediaFileDataTypes;
+ (id)allResourceTypesOrderedByClass;
+ (id)resourceWithPath:(id)arg1 contentType:(id)arg2 name:(id)arg3 icon:(id)arg4;
+ (id)resourceWithName:(id)arg1 contentType:(id)arg2 icon:(id)arg3 content:(id)arg4;
+ (id)resourceWithName:(id)arg1 contentType:(id)arg2 icon:(id)arg3 content:(id)arg4 explicitNameForFolding:(id)arg5 applicableFoldingStrategies:(id)arg6;
+ (id)resourceWithPath:(id)arg1 contentType:(id)arg2 name:(id)arg3 icon:(id)arg4 explicitNameForFolding:(id)arg5 applicableFoldingStrategies:(id)arg6;
@property(readonly, copy, nonatomic) NSMutableSet *iconRequests; // @synthesize iconRequests=_iconRequests;
@property(readonly, copy, nonatomic) NSMutableSet *contentRequests; // @synthesize contentRequests=_contentRequests;
@property(nonatomic, getter=isIconValid) BOOL iconValid; // @synthesize iconValid=_iconValid;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(nonatomic, getter=isContentValid) BOOL contentValid; // @synthesize contentValid=_contentValid;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSSet *applicableFoldingStrategies; // @synthesize applicableFoldingStrategies=_applicableFoldingStrategies;
@property(readonly, nonatomic) NSString *explicitNameForFolding; // @synthesize explicitNameForFolding=_explicitNameForFolding;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DVTFilePath *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(readonly, nonatomic) DVTFileDataType *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)variantSetNameWithFoldingStrategy:(id)arg1;
- (id)variantWithFoldingStrategy:(id)arg1;
- (id)extractNonVariantNameFromString:(id)arg1 forMediaType:(id)arg2 usingVariables:(id)arg3 withFoldingStrategy:(id)arg4 returningVariant:(id *)arg5;
- (id)extractNonVariantNameWithFoldingStrategy:(id)arg1 returningVariant:(id *)arg2;
- (void)populateAdditionalTypesToPasteboard:(id)arg1;
- (id)requestContentSynchronously;
- (void)requestContentAsynchronously:(CDUnknownBlockType)arg1;
- (id)requestIconSynchronously;
- (void)requestIconAsynchronously:(CDUnknownBlockType)arg1;
- (id)generateContentForFilePath:(id)arg1 contentType:(id)arg2;
- (id)generateIconForFilePath:(id)arg1 contentType:(id)arg2;
- (BOOL)isAppicableToFoldingStrategy:(id)arg1;
- (id)iconRequestsCreatingIfNeeded;
- (id)contentRequestsCreatingIfNeeded;
- (id)mediaLibraryDetailControllerIdentifier;
- (id)contentIfValid;
- (id)iconIfValid;
- (void)_stopObservingFilePath;
- (void)_startObservingFilePath;
- (BOOL)isBundleLike;
@property(readonly, nonatomic, getter=isPathBased) BOOL pathBased;
- (id)debugDescription;
- (id)description;
- (id)mediaType;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 content:(id)arg2 contentType:(id)arg3 name:(id)arg4 icon:(id)arg5 explicitNameForFolding:(id)arg6 applicableFoldingStrategies:(id)arg7;

@end