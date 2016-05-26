//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAutoImportCompletionItem : NSObject <DVTTextCompletionItem>
{
    id <IDEAutoImportable> _autoImportable;
    NSMutableArray *_additionalCompletions;
    NSString *_displayType;
    NSString *_displayText;
    NSString *_completionText;
    NSString *_name;
    unsigned long long _partialSelectorCount;
    NSAttributedString *_descriptionText;
    double _fuzzyMatchingScore;
}

@property double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore=_fuzzyMatchingScore;
@property(nonatomic) unsigned long long partialSelectorCount; // @synthesize partialSelectorCount=_partialSelectorCount;
@property(readonly, copy) NSArray *additionalCompletions; // @synthesize additionalCompletions=_additionalCompletions;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeAllAdditionalCompletions;
- (void)addImportStatementForAutoImportable:(id)arg1 forInsertionIntoContext:(id)arg2 withHeaderVisibility:(unsigned long long)arg3;
@property(readonly) int completionItemStyle;
@property(readonly) BOOL notRecommended;
@property double priority;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(readonly) NSImage *icon;
@property(readonly, copy) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *parentText;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly, copy) NSString *displayType;
@property(readonly, copy) NSString *displayText;
@property(readonly, copy) NSString *name;
- (void)_parseCompletionString;
- (id)initWithAutoImportable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end