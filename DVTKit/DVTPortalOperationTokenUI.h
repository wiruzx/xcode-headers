//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPortalOperationTokenUI : DVTPortalOperationToken
{
    NSWindow *_parentWindow;
}

+ (id)tokenWithDeveloperAccount:(id)arg1 useServerContext:(_Bool)arg2 parentWindow:(id)arg3;
+ (id)tokenWithDeveloperAccount:(id)arg1 parentWindow:(id)arg2;
@property(readonly) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (void)executeWithSession:(CDUnknownBlockType)arg1;

@end