//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSBotIntegrationDocument : XCSBotSupportingDocument
{
    XCSIntegration *botIntegration;
}

+ (id)keyPathsAffectingDisplayName;
+ (id)keyPathsAffectingBot;
@property(retain) XCSIntegration *botIntegration; // @synthesize botIntegration;
- (void).cxx_destruct;
- (id)displayName;
- (id)bot;
- (void)updateBotIntegration:(id)arg1;
- (void)setFileURL:(id)arg1;

@end