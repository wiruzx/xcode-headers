//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEObjCModernizationTargetChooserTargetItem : IDEObjCModernizationTargetChooserItem
{
    IDEObjCModernizationTargetChooserAssistant *_targetChooserAssistant;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
+ (id)keyPathsForValuesAffectingWarningMessage;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingTitle;
@property(retain) IDEObjCModernizationTargetChooserAssistant *targetChooserAssistant; // @synthesize targetChooserAssistant=_targetChooserAssistant;
- (void).cxx_destruct;
- (double)rowHeight;
- (id)warningMessage;
- (id)iconImage;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)isEnabled;
- (id)subTitle;
- (id)title;

@end