//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface JKJavaType : NSObject <NSCopying>
{
    NSString *_signature;
    NSString *_className;
    int _baseType;
    unsigned long long _dimensionality;
}

+ (id)typeWithSignature:(id)arg1;
- (id)description;
- (id)_baseTypeDescription;
- (id)className;
- (unsigned long long)dimensionality;
- (int)baseType;
- (id)signature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSignature:(id)arg1;

@end