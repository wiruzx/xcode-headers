//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringDataModelFileChange : XCRefactoringFileChange
{
    NSString *_srcEntityClassName;
    NSString *_dstEntityClassName;
    NSString *_srcPropertyName;
    NSString *_dstPropertyName;
}

@property(copy) NSString *destinationPropertyName; // @synthesize destinationPropertyName=_dstPropertyName;
@property(copy) NSString *sourcePropertyName; // @synthesize sourcePropertyName=_srcPropertyName;
@property(copy) NSString *destinationEntityClassName; // @synthesize destinationEntityClassName=_dstEntityClassName;
@property(copy) NSString *sourceEntityClassName; // @synthesize sourceEntityClassName=_srcEntityClassName;
- (BOOL)applyChange:(void *)arg1 error:(id *)arg2;
- (BOOL)_applyChangeToEntity:(id)arg1;
- (void)dealloc;
- (id)initWithFileChangeSet:(id)arg1 fileLocation:(id)arg2;

@end