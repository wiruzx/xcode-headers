//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceCodeComparisonAnnotationContext : IDEAnnotationContext <DVTSourceCodeComparisonAnnotationContext>
{
    int _dataSourceType;
    NSURL *_documentURL;
    DVTDiffDescriptor *_diffDescriptor;
    DVTDiffSession *_diffSession;
}

@property __weak DVTDiffSession *diffSession; // @synthesize diffSession=_diffSession;
@property __weak DVTDiffDescriptor *diffDescriptor; // @synthesize diffDescriptor=_diffDescriptor;
@property int dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
- (id)initWithEditor:(id)arg1 document:(id)arg2 fileDataType:(id)arg3 workspaceTabController:(id)arg4 documentURL:(id)arg5 dataSourceType:(int)arg6 diffDescriptor:(id)arg7 diffSession:(id)arg8;
- (id)initWithEditor:(id)arg1 document:(id)arg2 workspaceTabController:(id)arg3;
- (id)initWithFileDataType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end