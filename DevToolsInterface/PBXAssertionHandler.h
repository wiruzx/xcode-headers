//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXAssertionHandler : NSObject <XCAssertionHandling>
{
    NSPanel *_panel;
    NSTextView *_messageTextView;
    NSButton *_quitButton;
    NSButton *_continueButton;
    NSMutableDictionary *_headingLabelAttrs;
    NSMutableDictionary *_headingTextAttrs;
    NSMutableDictionary *_messageTextAttrs;
}

- (void)quit:(id)arg1;
- (void)continueAtOwnRisk:(id)arg1;
- (void)handleUncaughtException:(id)arg1;
- (void)handleFailureInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 messageFormat:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)_runInternalErrorPanelWithAttributedMessageString:(id)arg1;
- (void)_reallyRunInternalErrorPanelWithAttributedMessageString:(id)arg1;
- (void)_createAttributeDictionariesIfNeeded;

@end