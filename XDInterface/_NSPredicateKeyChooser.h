//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NSPredicateKeyChooser : NSResponder
{
    NSBrowser *_browser;
    NSComboBox *_combo;
    NSPredicateView *_predicateView;
    NSView *_view;
    NSString *_selectedKeyPath;
    id <NSPredicateViewDataSource> _dataSource;
    BOOL _usesSheet;
    BOOL _useDisplayNames;
    id <_NSPredicateKeyChooserCallback> _callback;
}

+ (void)openKeyBoxInView:(id)arg1 dataSource:(id)arg2 callback:(id)arg3;
+ (void)openKeyBoxInView:(id)arg1 callback:(id)arg2;
+ (id)openKeyBoxInView:(id)arg1 dataSource:(id)arg2;
+ (id)openKeyBoxInView:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)initAndOpenInView:(id)arg1 dataSource:(id)arg2 callback:(id)arg3;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)selectedKeyPath;
- (void)buttonCancel:(id)arg1;
- (void)buttonOK:(id)arg1;
- (void)_doClose:(long long)arg1;
- (void)clickOnKey:(id)arg1;
- (void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (long long)browser:(id)arg1 numberOfRowsInColumn:(long long)arg2;
- (id)initInView:(id)arg1;
- (void)awakeFromNib;
- (void)modalLooping:(id)arg1;
- (id)_keyPath;
- (id)_displayNamesForColumn:(long long)arg1;
- (id)_keysForColumn:(long long)arg1;
- (id)_pathToColumn:(long long)arg1;
- (id)_keyPathIncludingColumn:(long long)arg1;

@end