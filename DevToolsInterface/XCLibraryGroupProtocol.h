//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCLibraryGroupProtocol
- (void)setLibraries:(NSArray *)arg1;
- (NSArray *)librariesForType:(NSSet *)arg1;
- (NSArray *)objectfiles;
- (NSArray *)dylibs;
- (NSArray *)frameworks;
- (int)libraryCount;
- (NSArray *)libraries;
- (NSString *)displayName;
@end