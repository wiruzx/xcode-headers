//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCLibraryDescriptor : NSObject
{
    NSString *_path;
    NSString *_displayName;
    NSString *_sourceTree;
}

@property(readonly) NSString *sourceTree; // @synthesize sourceTree=_sourceTree;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void)setPath:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1 sourceTree:(id)arg2;

@end