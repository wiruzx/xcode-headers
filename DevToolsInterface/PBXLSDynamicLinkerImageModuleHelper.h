//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXLSDynamicLinkerImageModuleHelper : NSObject
{
    PBXExecutable *_executable;
    id _filesOwner;
    NSArray *_symbolLevelArray;
}

- (id)symbolLevelArray;
- (id)executable;
- (void)setExecutable:(id)arg1;

@end