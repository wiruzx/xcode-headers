//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXDebugStackFrameViewModule : PBXDebugDataValueViewModule
{
}

- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)updateFromContainerDataValue;
- (void)updateUI;
- (void)dsModelDidUpdate:(id)arg1;
- (long long)currentLineNumber;
- (id)stackFrame;
- (void)setModel:(id)arg1;
- (id)moduleNibName;
- (void)closeModule;
- (void)dealloc;

@end