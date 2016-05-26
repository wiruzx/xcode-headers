//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBRenderingProcessingResult : IBSceneUpdateProcessingResult
{
    NSData *_bitmapData;
    double _scaleFactor;
}

@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithBitmapData:(id)arg1 scaleFactor:(double)arg2;

@end