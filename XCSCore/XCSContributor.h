//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSContributor : XCSObject
{
    XCSCommit *_commit;
    NSString *_name;
    NSString *_displayName;
    NSArray *_emails;
}

+ (id)contributorWithName:(id)arg1 displayName:(id)arg2 emails:(id)arg3 validationErrors:(id *)arg4;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak XCSCommit *commit; // @synthesize commit=_commit;
- (void).cxx_destruct;
- (BOOL)_validateWithName:(id)arg1 displayName:(id)arg2 emails:(id)arg3 validationErrors:(id *)arg4;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)userPictureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithName:(id)arg1 displayName:(id)arg2 emails:(id)arg3 validationErrors:(id *)arg4;

@end