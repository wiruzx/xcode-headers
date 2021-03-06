//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSIssueAssociations : XCSObject
{
    XCSRadarIssueAssociation *_radar;
    XCSAssigneeIssueAssociation *_assignee;
}

@property(readonly, nonatomic) XCSAssigneeIssueAssociation *assignee; // @synthesize assignee=_assignee;
@property(readonly, nonatomic) XCSRadarIssueAssociation *radar; // @synthesize radar=_radar;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)extractAssociationWithClass:(Class)arg1 fromInfo:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end