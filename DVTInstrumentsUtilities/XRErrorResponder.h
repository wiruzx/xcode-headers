//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XRErrorResponder <NSObject>
- (void)logAnamolousErrorMessageWithFormat:(NSString *)arg1 args:(struct __va_list_tag [1])arg2;
- (void)logAnamolousErrorMessageWithFormat:(NSString *)arg1;
- (void)handleFatalError:(NSError *)arg1 from:(id)arg2;
@end