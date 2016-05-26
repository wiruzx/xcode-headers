//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSourceScannerItem : NSObject <PBXScannerItem>
{
    NSString *name;
    NSMutableArray *children;
    int type;
    PBXSourceScannerItem *parent;
    struct _NSRange nameRange;
    struct _NSRange range;
    long long nestingLevel;
    long long indentLevel;
}

- (long long)compareWithScannerItem:(id)arg1;
- (void)setIndentLevel:(long long)arg1;
- (long long)indentLevel;
- (void)setNestingLevel:(long long)arg1;
- (long long)nestingLevel;
- (void)setRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (void)setNameRange:(struct _NSRange)arg1;
- (struct _NSRange)nameRange;
- (void)setParent:(id)arg1;
- (id)parent;
- (BOOL)isDeclaration;
- (void)setType:(int)arg1;
- (int)type;
- (id)children;
- (long long)numberOfChildren;
- (id)childAtIndex:(long long)arg1;
- (void)addChild:(id)arg1;
- (void)setName:(id)arg1;
- (id)nameWithIndent;
- (id)name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end