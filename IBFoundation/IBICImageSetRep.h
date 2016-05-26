//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICImageSetRep : IBICSlottedAbstractImageRep
{
    NSNumber *_cachedAssetDataIsFullyOpaqueBitmap;
    NSString *_cachedFirstNonOpaquePixelMessage;
    IBICImageResizingBehavior *_resizingBehavior;
    CDStruct_c519178c _alignmentInsets;
}

+ (id)contentReferenceTypeName;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
@property(nonatomic) CDStruct_c519178c alignmentInsets; // @synthesize alignmentInsets=_alignmentInsets;
@property(copy, nonatomic) IBICImageResizingBehavior *resizingBehavior; // @synthesize resizingBehavior=_resizingBehavior;
- (void).cxx_destruct;
- (id)messageDescribingTransparency;
- (BOOL)assetDataIsFullyOpaqueBitmap;
- (void)cacheOpaquenessInfoIfNeeded;
- (void)assetDataWillChange;
- (CDStruct_550fdc95)taggingSupport;
- (id)shortDisplayName;
- (BOOL)shouldAppendGPUToDisplayName;
- (BOOL)shouldAppendSizeClassToDisplayName;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (id)parent;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 error:(id *)arg3;

@end