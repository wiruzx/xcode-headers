//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTDKDetailViewController : DVTViewController
{
    DVTNotificationToken *_frameChangeToken;
    DTDKViolatorView *_violatorView;
    DVTBorderedView *_summaryView;
    DTDKTableView *_tableView;
    NSViewController *_parentViewController;
}

+ (id)bundle;
+ (id)nibName;
+ (id)viewController;
+ (id)viewControllerWithTitle:(id)arg1;
@property(retain) NSViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain) DTDKTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) DVTBorderedView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain) DTDKViolatorView *violatorView; // @synthesize violatorView=_violatorView;
- (void).cxx_destruct;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)layoutViews;

@end