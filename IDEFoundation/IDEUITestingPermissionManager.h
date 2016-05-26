//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEUITestingPermissionManager : NSObject
{
    int _availabilityToken;
    int _tccAllowedToken;
}

+ (id)sharedManager;
@property int tccAllowedToken; // @synthesize tccAllowedToken=_tccAllowedToken;
@property int availabilityToken; // @synthesize availabilityToken=_availabilityToken;
- (BOOL)setXcodeUITestingAgentAsResponsibleProcessForPID:(int)arg1 errorString:(id *)arg2;
- (id)_newInstanceOfXcodeHelper:(id *)arg1;
@property(readonly, copy) NSRunningApplication *runningApplicationForXcodeHelper;
- (id)_URLForXcodeHelper;
- (void)checkUITestingPermissionForXcodeUITestingAgentWithPrompt:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)shouldUseTCC;
- (BOOL)_checkPermissionsWithPrompt:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_waitForXcodeHelperToBeAvailable:(id *)arg1;
- (BOOL)_needToLaunchXcodeHelper;
- (id)init;

@end