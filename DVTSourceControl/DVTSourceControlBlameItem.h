//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSourceControlBlameItem : NSObject <NSSecureCoding, NSCopying>
{
    DVTSourceControlLogItem *_logItem;
    struct _NSRange _lineRange;
}

+ (BOOL)supportsSecureCoding;
@property(retain) DVTSourceControlLogItem *logItem; // @synthesize logItem=_logItem;
@property struct _NSRange lineRange; // @synthesize lineRange=_lineRange;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLineRange:(struct _NSRange)arg1 logItem:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end