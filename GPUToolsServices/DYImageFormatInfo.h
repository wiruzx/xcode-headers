//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYImageFormatInfo : NSObject
{
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned int _type;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
@property(nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
- (id)initWithInternalFormat:(unsigned int)arg1 format:(unsigned int)arg2 andType:(unsigned int)arg3;

@end