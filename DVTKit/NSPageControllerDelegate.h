//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSPageControllerDelegate <NSObject>

@optional
- (void)pageControllerDidEndLiveTransition:(NSPageController *)arg1;
- (void)pageControllerWillStartLiveTransition:(NSPageController *)arg1;
- (void)pageController:(NSPageController *)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(NSPageController *)arg1 prepareViewController:(NSViewController *)arg2 withObject:(id)arg3;
- (struct CGRect)pageController:(NSPageController *)arg1 frameForObject:(id)arg2;
- (NSViewController *)pageController:(NSPageController *)arg1 viewControllerForIdentifier:(NSString *)arg2;
- (NSString *)pageController:(NSPageController *)arg1 identifierForObject:(id)arg2;
@end