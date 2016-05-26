//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDERefactoringBuildSettings : NSObject
{
    int _status;
    NSDictionary *_headerMappings;
}

+ (id)plistFileSettings;
+ (id)dataModelFileSettings;
+ (id)nibFileSettings;
+ (id)fileInNoIndexables;
+ (id)noBuildSettingsFound;
@property(readonly) NSDictionary *headerMappings; // @synthesize headerMappings=_headerMappings;
@property int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)pathForFileName:(id)arg1 includedByFiles:(id)arg2 usingQuotes:(BOOL)arg3;
@property(readonly) BOOL alwaysSearchUserPaths;
@property(readonly) NSNumber *arcMode;
@property(readonly) NSString *languageDialect;
@property(readonly) NSArray *undefinedMacroNames;
@property(readonly) NSArray *predefinedMacroNamesAndDefs;
@property(readonly) NSArray *userIncludePaths;
@property(readonly) NSArray *systemIncludePaths;
@property(readonly) NSArray *frameworkSearchPaths;
@property(readonly) NSSet *plistFilePaths;
@property(readonly) NSArray *preincludeFiles;
- (id)init;

@end