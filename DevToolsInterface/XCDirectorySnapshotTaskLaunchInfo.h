//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCDirectorySnapshotTaskLaunchInfo : XCPosixTaskLaunchInfo
{
}

+ (void)initialize;
- (id)launchInfoArrayByDividingArguments;
- (id)_launchInfoArrayByDividingMkdirArguments;
- (id)_launchInfoArrayByDividingTouchArguments;
- (id)_launchInfoArrayByDividingDittoArguments;
- (id)_launchInfoArrayByDividingArgumentsWithNumberOfPrefixes:(int)arg1 numberOfPostfixes:(int)arg2;
- (id)initMkdirTaskWithDir:(id)arg1 directories:(id)arg2;
- (id)initTouchTaskWithDir:(id)arg1 files:(id)arg2;
- (id)initDittoTaskWithSourceDir:(id)arg1 destDir:(id)arg2 entries:(id)arg3;
- (id)initDittoTaskWithSourceDir:(id)arg1 destDir:(id)arg2;

@end