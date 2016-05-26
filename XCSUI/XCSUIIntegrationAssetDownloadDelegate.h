//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIIntegrationAssetDownloadDelegate : NSObject <NSURLSessionDownloadDelegate>
{
    NSString *_destinationFilePath;
    CDUnknownBlockType _callback;
    NSString *_destinationDirectory;
    NSString *_destinationFile;
}

@property(copy) NSString *destinationFile; // @synthesize destinationFile=_destinationFile;
@property(copy) NSString *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)unzipArchiveAtPath:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end