//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEArchivePathsSnapshot : NSObject <NSCopying>
{
    DVTFilePath *_archivePath;
    DVTFilePath *_archiveProductsPath;
    DVTFilePath *_archiveDSYMsPath;
}

@property(retain) DVTFilePath *archiveDSYMsPath; // @synthesize archiveDSYMsPath=_archiveDSYMsPath;
@property(retain) DVTFilePath *archiveProductsPath; // @synthesize archiveProductsPath=_archiveProductsPath;
@property(retain) DVTFilePath *archivePath; // @synthesize archivePath=_archivePath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end