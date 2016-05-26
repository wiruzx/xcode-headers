//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTMalformedProductIdentifier : DVTProductIdentifier
{
    DVTProductCategory *_productCategory;
    NSString *_bundleIdentifier;
    NSString *_name;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)malformedProductIdentifierWithArchive:(id)arg1;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)bundleIdentifier;
- (id)productCategory;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProductCategory:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3;

@end