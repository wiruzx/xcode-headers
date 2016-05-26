//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYAnalyzerArchiveVisitor : DYInOrderInstructionFilesVisitor
{
    DYCaptureArchive *_archive;
    DYAnalyzerEngine *_engine;
    BOOL _bStartedFrameVisiting;
    int _captureBlockMode;
}

@property(readonly, retain, nonatomic) DYAnalyzerEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
@property(nonatomic) BOOL unsorted; // @dynamic unsorted;
- (void)abort;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)performPreCaptureVisitActions;
- (void)visitCaptureArchive:(id)arg1;
- (void)processFunctionStream:(id)arg1;
- (id)_loadEngineForAPI:(unsigned int)arg1 deviceInfo:(id)arg2;
- (void)_runAnalyzerWithBlock:(CDUnknownBlockType)arg1;
- (void)runAnalyzerProducingNoFindingsWithSingleFrameMode:(BOOL)arg1;
- (id)generateFindingsAndAddTo:(id)arg1 singleFrameMode:(BOOL)arg2;
- (id)initForArchive:(id)arg1;

@end