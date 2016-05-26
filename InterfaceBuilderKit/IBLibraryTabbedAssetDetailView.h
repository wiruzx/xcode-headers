//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBLibraryTabbedAssetDetailView : NSView
{
    NSPopUpButton *detailItemSwitcher;
    IBFillView *fillView;
    NSView *currentDetailItemView;
    id selectedRepresentedObject;
    NSArray *representedObjects;
    id delegate;
    double switcherGap;
}

@property(retain, nonatomic) id selectedRepresentedObject; // @synthesize selectedRepresentedObject;
@property(retain, nonatomic) NSArray *representedObjects; // @synthesize representedObjects;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) IBFillView *fillView; // @synthesize fillView;
@property(retain, nonatomic) NSPopUpButton *detailItemSwitcher; // @synthesize detailItemSwitcher;
@property(retain, nonatomic) NSView *currentDetailItemView; // @synthesize currentDetailItemView;
- (void)takeSelectionFromSwitcher:(id)arg1;
- (void)sizeToFit;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)relayoutSubviews;
- (double)contentHeight;
- (double)switcherAreaHeight;
- (void)switcherSetSelectedRepresentedObject:(id)arg1;
- (id)switcherSelectedRepresentedObject;
- (void)switcherSetRepresentedObjects:(id)arg1;
- (void)switcherLayout;
- (BOOL)showsFirstResponder;
- (void)awakeFromNib;
- (void)dealloc;

@end