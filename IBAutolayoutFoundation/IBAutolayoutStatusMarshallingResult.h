//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutStatusMarshallingResult : IBObjectBasedMarshallingResult
{
    IBAutolayoutStatus *_autolayoutStatus;
}

@property(retain, nonatomic) IBAutolayoutStatus *autolayoutStatus; // @synthesize autolayoutStatus=_autolayoutStatus;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end