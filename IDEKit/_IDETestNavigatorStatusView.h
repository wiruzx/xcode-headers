//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDETestNavigatorStatusView : NSView
{
    NSImageView *_statusImageView;
    NSButton *_button;
    NSProgressIndicator *_progressIndicator;
    NSImage *_statusImage;
    BOOL _showProgressIndicator;
    BOOL _showRunIcon;
    BOOL _showStatusView;
}

@property(nonatomic) BOOL showStatusView; // @synthesize showStatusView=_showStatusView;
@property(nonatomic) BOOL showRunIcon; // @synthesize showRunIcon=_showRunIcon;
@property(nonatomic) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
- (void).cxx_destruct;
- (void)_updateSubviewsVisibility;
- (void)setState:(unsigned long long)arg1 pendingRun:(BOOL)arg2;
@property(nonatomic) BOOL enableRunIcon;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (id)init;

@end