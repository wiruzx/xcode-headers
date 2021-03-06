//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTDeveloperPaths : NSObject
{
    NSMutableDictionary *_pathCache;
}

+ (id)defaultPaths;
- (id)_developerUsrPath;
- (id)_developerFolderPath;
- (id)_pathForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 forVersionPathComponent:(id)arg3;
- (void)_setValidDomains:(unsigned long long)arg1;
- (unsigned long long)_validDomains;
- (id)description;
- (id)searchPathsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forToolsVersions:(id)arg3 includingUnversionedLocations:(BOOL)arg4;
- (id)searchPathsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)preferredUnversionedPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)preferredPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forToolsVersion:(id)arg3;
- (id)developerPathForDirectory:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDeveloperDirPath:(id)arg1 developerUsrPath:(id)arg2 validDomains:(unsigned long long)arg3;
- (id)initWithDeveloperDirPath:(id)arg1 developerUsrPath:(id)arg2;
- (id)init;

@end