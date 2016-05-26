//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCompressionInfoProvider : NSObject
{
    CDUnknownBlockType _debugInfoForIndexQueryBlock;
    CDUnknownBlockType _swiftGeneratedFunctionForIndexQueryBlock;
    CDUnknownBlockType _libraryNameForIndexQueryBlock;
}

@property(readonly) CDUnknownBlockType libraryNameForIndexQueryBlock; // @synthesize libraryNameForIndexQueryBlock=_libraryNameForIndexQueryBlock;
@property(copy) CDUnknownBlockType swiftGeneratedFunctionForIndexQueryBlock; // @synthesize swiftGeneratedFunctionForIndexQueryBlock=_swiftGeneratedFunctionForIndexQueryBlock;
@property(readonly) CDUnknownBlockType debugInfoForIndexQueryBlock; // @synthesize debugInfoForIndexQueryBlock=_debugInfoForIndexQueryBlock;
- (void).cxx_destruct;
- (id)initWithDebugInfoQueryBlock:(CDUnknownBlockType)arg1 libraryNameQueryBlock:(CDUnknownBlockType)arg2;

@end