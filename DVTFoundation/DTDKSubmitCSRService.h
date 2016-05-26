//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTDKSubmitCSRService : DTDKCertificateService
{
    unsigned long long _certType;
    NSData *_certificateSigningRequest;
    NSString *_certificateEmail;
    NSString *_certificateCommonName;
    DVTSigningCertificateManager *_signingCertificateManager;
}

+ (id)keyPathsForValuesAffectingCertificateRequestStatusString;
+ (id)keyPathsForValuesAffectingCertificateRequestStatusCode;
+ (id)keyPathsForValuesAffectingCertificateRequestID;
+ (id)serviceForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3 signingCertificateManager:(id)arg4;
@property(retain) DVTSigningCertificateManager *signingCertificateManager; // @synthesize signingCertificateManager=_signingCertificateManager;
@property(copy) NSString *certificateCommonName; // @synthesize certificateCommonName=_certificateCommonName;
@property(copy) NSString *certificateEmail; // @synthesize certificateEmail=_certificateEmail;
@property(copy) NSData *certificateSigningRequest; // @synthesize certificateSigningRequest=_certificateSigningRequest;
@property unsigned long long certType; // @synthesize certType=_certType;
- (void).cxx_destruct;
- (void)_internalExecute;
@property(readonly) NSString *certificateRequestStatusString;
@property(readonly) int certificateRequestStatusCode;
@property(readonly) NSString *certificateRequestID;

@end