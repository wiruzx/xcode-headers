//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBICSchemaProvider <NSObject>
- (void)registerSchemaComponents:(IBICSchema *)arg1;
- (double)precedence;

@optional
+ (void)setContextDataFromCallingHost:(id)arg1;
+ (id)contextDataForRemoteTool;
+ (BOOL)supportsRemoteToolsTargetingPlatformNamed:(NSString *)arg1;
@end