//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCAppleScriptPath : NSObject
{
    id _container;
    long long _index;
    NSString *_path;
}

- (void)handleMoveCommand:(id)arg1;
- (void)insertPathIntoContainer:(id)arg1 atIndex:(long long)arg2 forCommand:(id)arg3;
- (id)objectSpecifierForKey:(id)arg1;
- (void)setPath:(id)arg1;
- (void)_setPath:(id)arg1;
- (id)path;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (id)mutableContainerArray;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)dealloc;
- (id)init;

@end