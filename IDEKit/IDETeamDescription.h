//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETeamDescription : NSObject
{
    NSString *_name;
    NSString *_role;
    id <IDEProvisioningTeam> _team;
}

@property(retain, nonatomic) id <IDEProvisioningTeam> team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end