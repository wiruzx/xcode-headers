//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDERunDestinationMenuItemColoredSpinner : DVTColoredSpinner
{
    NSMenuItem *_menuItem;
}

@property __weak NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void).cxx_destruct;
- (struct CGRect)visibleRect;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)canDraw;
- (void)_timerStep:(id)arg1;

@end