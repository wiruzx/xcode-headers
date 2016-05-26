//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTScrollView : NSScrollView
{
    BOOL _handleBoundsOrFrameChangePending;
    _DVTScrollViewSeparatorView *_bottomBorderView;
    id _contentViewBoundsChangeNotificationToken;
    id _documentViewFrameChangeNotificationToken;
    BOOL _showsBorderOnBottom;
    BOOL _borderComesAndGoesBasedOnScrollPosition;
}

@property(nonatomic) BOOL borderComesAndGoesBasedOnScrollPosition; // @synthesize borderComesAndGoesBasedOnScrollPosition=_borderComesAndGoesBasedOnScrollPosition;
@property(nonatomic) BOOL showsBorderOnBottom; // @synthesize showsBorderOnBottom=_showsBorderOnBottom;
- (void).cxx_destruct;
- (void)tile;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)_handleBoundsOrFrameChanged;
- (void)_conditionallyInstallOrRemoveNotificationObservers;
- (void)viewDidMoveToWindow;
- (void)_dvtScrollViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end