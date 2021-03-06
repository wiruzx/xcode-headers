//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DSAFastToken : NSObject <DSAToken, NSCoding>
{
    NSXMLDocument *_XMLDescription;
    BOOL deprecated;
    NSString *usr;
    NSString *name;
    NSString *apiLanguage;
    NSString *relativeURL;
    NSString *scope;
    NSString *type;
    NSString *declaredInFrameworkName;
    DSADocSet *docSet;
}

+ (id)fastTokenWithUSR:(id)arg1 name:(id)arg2 language:(id)arg3 relativeURL:(id)arg4 scope:(id)arg5 type:(id)arg6 declaredInFrameworkName:(id)arg7 deprecated:(BOOL)arg8 docSet:(id)arg9;
@property(retain) DSADocSet *docSet; // @synthesize docSet;
@property(getter=isDeprecated) BOOL deprecated; // @synthesize deprecated;
@property(copy) NSString *declaredInFrameworkName; // @synthesize declaredInFrameworkName;
@property(copy) NSString *type; // @synthesize type;
@property(copy) NSString *scope; // @synthesize scope;
@property(copy) NSString *relativeURL; // @synthesize relativeURL;
@property(copy) NSString *apiLanguage; // @synthesize apiLanguage;
@property(copy) NSString *name; // @synthesize name;
@property(copy) NSString *usr; // @synthesize usr;
- (void).cxx_destruct;
- (id)tokenWithFixedUpLanguage:(id)arg1;
- (id)XMLDescription;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)availabilityInformationAsOfDistributionVersion:(CDStruct_6df46f26)arg1 forArchitectures:(id)arg2;
- (id)abstract;
- (id)fastTokenWithLanguage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)valueForDeclaredInFrameworkName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end