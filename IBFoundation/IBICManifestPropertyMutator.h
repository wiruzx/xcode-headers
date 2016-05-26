//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICManifestPropertyMutator : IBICCatalogMutator
{
    NSString *_keyPath;
    id <NSCopying> _value;
    id <NSCopying> _originalValue;
    IBICAbstractCatalogItem *_item;
    NSData *_pendingManifestData;
    NSString *_pendingManifestPath;
}

- (void).cxx_destruct;
- (id)inverseMutator;
- (id)mutationDescription;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyToModel;
- (id)initWithItem:(id)arg1 andValue:(id)arg2 forKeyPath:(id)arg3;

@end