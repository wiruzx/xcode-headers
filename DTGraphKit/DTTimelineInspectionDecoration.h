//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelineInspectionDecoration : NSObject
{
    BOOL _clickable;
    NSAttributedString *_summary;
    struct DTTimelineRepresentativeDecoration _representedDecorationInfo;
}

+ (id)pluralizeNoun:(id)arg1 forCount:(long long)arg2;
@property(nonatomic, getter=isClickable) BOOL clickable; // @synthesize clickable=_clickable;
@property(readonly, nonatomic) struct DTTimelineRepresentativeDecoration representedDecorationInfo; // @synthesize representedDecorationInfo=_representedDecorationInfo;
@property(copy, nonatomic) NSAttributedString *summary; // @synthesize summary=_summary;
- (void).cxx_destruct;
- (void)setSummaryAsString:(id)arg1;
@property(readonly, nonatomic) NSDictionary *baseStringAttributes;
@property(readonly, nonatomic) struct XRTimeRange range;
- (id)init;
- (id)initWithRepInfo:(struct DTTimelineRepresentativeDecoration)arg1;

@end