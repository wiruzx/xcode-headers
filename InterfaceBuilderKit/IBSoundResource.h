//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSoundResource : IBResource
{
    NSSound *sound;
}

+ (id)resourceForProjectResourceReaderOutput:(id)arg1;
+ (id)resourcePlaceholderIdentifierBase;
+ (id)resourceIdentifierBase;
+ (id)synchronizedResourceFilesForFiles:(id)arg1;
+ (id)synchronizedResourceExtensions;
+ (id)systemResource:(id)arg1 name:(id)arg2;
- (id)resource;
- (id)pasteboardTypes;
- (id)displayIcon;
- (id)sound;
- (void)dealloc;
- (id)initWithResource:(id)arg1 name:(id)arg2 identifier:(id)arg3 source:(long long)arg4 andDisplayPaths:(id)arg5;

@end