//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProvisioningDeveloperStub : NSObject <IDEProvisioningDeveloper>
{
    DVTDeveloperAccount *_account;
    NSSet *_teams;
}

@property(readonly) NSSet *teams; // @synthesize teams=_teams;
@property(readonly) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly) NSString *username;
- (id)initWithAccount:(id)arg1 teams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end