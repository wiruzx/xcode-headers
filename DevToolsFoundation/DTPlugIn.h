//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTPlugIn : NSObject
{
    id _plugInData;
    DTPlugInManager *_plugInManager;
    void *reserved[2];
}

- (BOOL)load:(id *)arg1;
- (BOOL)isLoaded;
- (id)principalInstance;
- (id)path;
- (id)bundle;
- (id)requiredPlugIns;
- (id)extensionPoints;
- (id)extensions;
- (BOOL)preload;
- (id)version;
- (id)identifier;
- (id)name;
- (id)_plugInDescription;
- (void)dealloc;
- (id)initWithPlugInDescription:(id)arg1 plugInManager:(id)arg2;

@end