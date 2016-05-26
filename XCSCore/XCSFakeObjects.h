//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSFakeObjects : NSObject
{
}

+ (id)generateFailureSummary;
+ (id)generateFakeVersionInfo;
+ (id)generateFakeSettings;
+ (id)generateFakePerfMetricTestResult;
+ (id)generateFakeNotificationRequest;
+ (id)generateFakeHostedRepository;
+ (id)generateFakeHTTPRequest;
+ (id)generateFakePortalTeam;
+ (id)generateFakeArchive;
+ (id)generateFakeProduct;
+ (id)generateFakeTriggerLog;
+ (id)generateFakeXcodebuildLog;
+ (id)generateFakeBuildServiceLog;
+ (id)generateFakeSCMLog;
+ (id)generateFakeIntegrationTestResult;
+ (id)generateFakeIntegrationWithBot:(id)arg1 integrationNumber:(unsigned long long)arg2;
+ (id)generateFakeIntegrationWithBot:(id)arg1;
+ (id)generateFakeIntegration;
+ (id)generateFakeCommit;
+ (id)generateFakeCommitWithContributor:(id)arg1;
+ (id)generateFakeContributorWithName:(id)arg1 displayName:(id)arg2 emails:(id)arg3;
+ (id)generateFakeContributor;
+ (id)generateFakeCommitHistory;
+ (id)generateFakeCommitChangeFilePath;
+ (id)arrayWithCoverageCouchDocsUsingIntegrationID:(id)arg1 number:(unsigned long long)arg2 targetCount:(unsigned long long)arg3 fileCount:(unsigned long long)arg4 methodCount:(unsigned long long)arg5 deviceCount:(unsigned long long)arg6 error:(id *)arg7;
+ (id)generateFakeCodeCoverageIntegrationWithID:(id)arg1 number:(unsigned long long)arg2 targetCount:(unsigned long long)arg3 fileCount:(unsigned long long)arg4 methodCount:(unsigned long long)arg5 deviceCount:(unsigned long long)arg6;
+ (id)generateFakeCodeCoverageIntegrationWithTargetUpToCount:(unsigned long long)arg1 fileUpToCount:(unsigned long long)arg2 methodUpToCount:(unsigned long long)arg3 deviceUpToCount:(unsigned long long)arg4;
+ (id)generateFakeCodeCoverageIntegration;
+ (id)generateFakeCodeCoverageTarget;
+ (id)generateFakeCodeCoverageFile;
+ (id)generateFakeCodeCoverageMethod;
+ (id)generateFakeCodeCoverageDevice;
+ (id)generateFakeIntegrationIssues;
+ (id)generateFakeIntegrationIssueDiff;
+ (id)generateFakeIntegrationIssue;
+ (id)generateFakeBuildResultSummary;
+ (id)generateFakeTestResult;
+ (id)generateFakeTestPerfMetric;
+ (id)generateFakeTest;
+ (id)generateFakeTestPlaceholder;
+ (id)generateFakeProxiedDevice;
+ (id)generateFakeTestDeviceWithID:(id)arg1;
+ (id)generateFakeTestDevice;
+ (id)generateFakeDevice;
+ (id)generateFakeProxiedDeviceWithID:(id)arg1 activeProxiedDeviceID:(id)arg2;
+ (id)generateFakeDeviceWithID:(id)arg1;
+ (id)fakeDeviceUDIDWithLength:(long long)arg1;
+ (id)fakeMacDeviceUDID;
+ (id)fakeiOSDeviceUDID;
+ (id)generateFakeBotWithBlueprint:(id)arg1;
+ (id)generateFakeBot;
+ (id)generateFakeBotConfigurationWithOverrideToolchain:(id)arg1;
+ (id)generateFakeBotConfigurationWithBlueprint:(id)arg1;
+ (id)generateFakeBotConfigurationToolchain;
+ (id)generateFakeBotConfiguration;
+ (id)generateAuthenticatedSCMTestSourceControlBlueprint;
+ (id)generateFakeUnauthenticatedGitLabSourceControlBlueprint;
+ (id)generateFakeUnauthenticatedSourceControlBlueprint;
+ (id)generateFakeSourceControlBlueprint;
+ (id)generateAuthenticatedRSASCMTestSourceControlBlueprintContents;
+ (id)generateAuthenticatedSCMTestSourceControlBlueprintContents;
+ (id)generateFakeUnauthenticatedGitLabSourceControlBlueprintContents;
+ (id)generateFakeUnauthenticatedSourceControlBlueprintContents;
+ (id)generateFakeSourceControlBlueprintContents;
+ (id)generateFakeBotIssue;
+ (id)generateFakeFailingTrigger;
+ (id)generateFakeTrigger;
+ (id)generateFakeTriggerEmailConfiguration;
+ (id)generateFakeTriggerConditions;
+ (id)generateFakeBotGroup;
+ (id)generateFakeACL;
+ (id)stringWithGenerationCount;
+ (void)setGenerationCountForDevice:(unsigned long long)arg1 target:(unsigned long long)arg2 class:(unsigned long long)arg3 test:(unsigned long long)arg4 perfMetric:(unsigned long long)arg5;

@end