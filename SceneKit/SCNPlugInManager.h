//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNPlugInManager : NSObject
{
}

+ (id)loadSceneWithURL:(id)arg1 options:(id)arg2 statusHandler:(CDUnknownBlockType)arg3;
+ (BOOL)canImportFileExtension:(id)arg1;
+ (BOOL)canImportFileUTI:(id)arg1;
+ (id)importableFileUTIs;
+ (id)plugInCandidatesForFileUTI:(id)arg1 extension:(id)arg2;
+ (id)availableImporterDescriptions;
+ (void)setupIfNeeded;
+ (void)setup;

@end