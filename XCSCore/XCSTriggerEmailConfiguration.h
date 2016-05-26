//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSTriggerEmailConfiguration : XCSObject
{
    BOOL _emailCommitters;
    BOOL _includeIssueDetails;
    BOOL _includeCommitMessages;
    XCSTriggerSCMOptions *_scmOptions;
    NSArray *_additionalRecipients;
}

+ (id)emailConfigurationWithAdditionalRecipients:(id)arg1 scmOptions:(id)arg2 emailCommitters:(BOOL)arg3 includeIssueDetails:(BOOL)arg4 includeCommitMessages:(BOOL)arg5 validationErrors:(id *)arg6;
@property(nonatomic) BOOL includeCommitMessages; // @synthesize includeCommitMessages=_includeCommitMessages;
@property(nonatomic) BOOL includeIssueDetails; // @synthesize includeIssueDetails=_includeIssueDetails;
@property(retain, nonatomic) NSArray *additionalRecipients; // @synthesize additionalRecipients=_additionalRecipients;
@property(retain, nonatomic) XCSTriggerSCMOptions *scmOptions; // @synthesize scmOptions=_scmOptions;
@property(nonatomic) BOOL emailCommitters; // @synthesize emailCommitters=_emailCommitters;
- (void).cxx_destruct;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)_validateAdditionalRecipients:(id)arg1 scmOptions:(id)arg2 emailCommitters:(BOOL)arg3 includeIssueDetails:(BOOL)arg4 includeCommitMessages:(BOOL)arg5 validationErrors:(id *)arg6;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithAdditionalRecipients:(id)arg1 scmOptions:(id)arg2 emailCommitters:(BOOL)arg3 includeIssueDetails:(BOOL)arg4 includeCommitMessages:(BOOL)arg5 validationErrors:(id *)arg6;

@end