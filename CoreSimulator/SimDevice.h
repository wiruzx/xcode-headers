//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SimDevice : NSObject <SimDeviceNotifier>
{
    unsigned long long _state;
    NSString *_name;
    NSMutableDictionary *_headServicePorts;
    NSString *_deviceTypeIdentifier;
    NSString *_runtimeIdentifier;
    NSUUID *_UDID;
    SimDeviceSet *_deviceSet;
    SimDeviceNotificationManager *_notificationManager;
    NSObject<OS_dispatch_queue> *_bootstrapQueue;
    NSMutableDictionary *_registeredServices;
    NSObject<OS_dispatch_queue> *_stateVariableQueue;
    NSMachPort *_deathTriggerPort;
    NSMachPort *_hostSupportPort;
    NSMutableArray *_darwinNotificationTokens;
    NSDictionary *_bootEnvironment;
}

+ (BOOL)supportsFeature:(id)arg1 deviceType:(id)arg2 runtime:(id)arg3;
+ (BOOL)isValidState:(unsigned long long)arg1;
+ (id)simDevice:(id)arg1 UDID:(id)arg2 deviceTypeIdentifier:(id)arg3 runtimeIdentifier:(id)arg4 state:(unsigned long long)arg5 deviceSet:(id)arg6;
+ (id)simDeviceAtPath:(id)arg1 deviceSet:(id)arg2;
+ (id)createDeviceWithName:(id)arg1 deviceSet:(id)arg2 deviceType:(id)arg3 runtime:(id)arg4;
@property(copy) NSDictionary *bootEnvironment; // @synthesize bootEnvironment=_bootEnvironment;
@property(retain) NSMutableArray *darwinNotificationTokens; // @synthesize darwinNotificationTokens=_darwinNotificationTokens;
@property(retain, nonatomic) NSMachPort *hostSupportPort; // @synthesize hostSupportPort=_hostSupportPort;
@property(retain) NSMachPort *deathTriggerPort; // @synthesize deathTriggerPort=_deathTriggerPort;
@property(retain) NSObject<OS_dispatch_queue> *stateVariableQueue; // @synthesize stateVariableQueue=_stateVariableQueue;
@property(retain) NSMutableDictionary *registeredServices; // @synthesize registeredServices=_registeredServices;
@property(retain) NSObject<OS_dispatch_queue> *bootstrapQueue; // @synthesize bootstrapQueue=_bootstrapQueue;
@property(retain) SimDeviceNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property __weak SimDeviceSet *deviceSet; // @synthesize deviceSet=_deviceSet;
@property(copy) NSUUID *UDID; // @synthesize UDID=_UDID;
@property(copy) NSString *runtimeIdentifier; // @synthesize runtimeIdentifier=_runtimeIdentifier;
@property(copy) NSString *deviceTypeIdentifier; // @synthesize deviceTypeIdentifier=_deviceTypeIdentifier;
- (void).cxx_destruct;
- (id)portForServiceNamed:(id)arg1 error:(id *)arg2;
- (void)registerHeadServicePorts;
@property(readonly) NSMutableDictionary *headServicePorts; // @synthesize headServicePorts=_headServicePorts;
- (BOOL)isAvailableWithError:(id *)arg1;
@property(readonly) BOOL available;
- (BOOL)syncUnpairedDevicesWithError:(id *)arg1;
- (BOOL)triggerCloudSyncWithError:(id *)arg1;
- (void)triggerCloudSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)darwinNotificationSetState:(unsigned long long)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)darwinNotificationGetState:(unsigned long long *)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)postDarwinNotification:(id)arg1 error:(id *)arg2;
- (int)launchApplicationWithID:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)launchApplicationAsyncWithID:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)installedAppsWithError:(id *)arg1;
- (id)propertiesOfApplication:(id)arg1 error:(id *)arg2;
- (BOOL)applicationIsInstalled:(id)arg1 type:(id *)arg2 error:(id *)arg3;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (BOOL)setKeyboardLanguage:(id)arg1 error:(id *)arg2;
- (BOOL)addVideo:(id)arg1 error:(id *)arg2;
- (BOOL)addPhoto:(id)arg1 error:(id *)arg2;
- (BOOL)openURL:(id)arg1 error:(id *)arg2;
- (long long)compare:(id)arg1;
- (id)newDeviceNotification;
- (id)createXPCNotification:(const char *)arg1;
- (id)createXPCRequest:(const char *)arg1;
- (void)handleXPCRequestSpawn:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestGetenv:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestLookup:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestUnregister:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestRegister:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestRestore:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestErase:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestUpgrade:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestShutdown:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestBoot:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequestRename:(id)arg1 peer:(id)arg2;
- (void)handleXPCRequest:(id)arg1 peer:(id)arg2;
- (void)handleXPCNotificationDeviceRenamed:(id)arg1;
- (void)handleXPCNotificationDeviceStateChanged:(id)arg1;
- (void)handleXPCNotification:(id)arg1;
- (void)setName:(id)arg1;
@property(readonly, copy) NSString *name;
- (void)setState:(unsigned long long)arg1;
@property(readonly) unsigned long long state;
- (id)stateString;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (void)simulateMemoryWarning;
- (id)memoryWarningFilePath;
@property(readonly, copy) NSString *logPath;
- (id)dataPath;
- (id)devicePath;
- (id)environment;
- (int)_spawnFromSelfWithPath:(id)arg1 options:(id)arg2 terminationHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (int)_spawnFromLaunchdWithPath:(id)arg1 options:(id)arg2 terminationHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (int)spawnWithPath:(id)arg1 options:(id)arg2 terminationHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)spawnAsyncWithPath:(id)arg1 options:(id)arg2 terminationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)unregisterService:(id)arg1 error:(id *)arg2;
- (BOOL)registerPort:(unsigned int)arg1 service:(id)arg2 error:(id *)arg3;
- (unsigned int)lookup:(id)arg1 error:(id *)arg2;
- (unsigned int)_lookup:(id)arg1 error:(id *)arg2;
- (id)getenv:(id)arg1 error:(id *)arg2;
- (BOOL)restoreContentsAndSettingsFromDevice:(id)arg1 error:(id *)arg2;
- (void)restoreContentsAndSettingsAsyncFromDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)eraseContentsAndSettingsWithError:(id *)arg1;
- (BOOL)_bq_eraseContentsAndSettingsWithError:(id *)arg1;
- (void)eraseContentsAndSettingsAsyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)upgradeToRuntime:(id)arg1 error:(id *)arg2;
- (void)upgradeAsyncToRuntime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)rename:(id)arg1 error:(id *)arg2;
- (void)renameAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shutdownWithError:(id *)arg1;
- (BOOL)_shutdownWithError:(id *)arg1;
- (void)shutdownAsyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)bootWithOptions:(id)arg1 error:(id *)arg2;
- (void)bootAsyncWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchdDeathHandlerWithDeathPort:(id)arg1;
- (BOOL)startLaunchdWithDeathPort:(id)arg1 deathHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)registerPortsWithLaunchd;
@property(readonly) NSArray *launchDaemonsPaths;
- (BOOL)removeLaunchdJobWithError:(id *)arg1;
- (BOOL)createLaunchdJobWithError:(id *)arg1 extraEnvironment:(id)arg2 disabledJobs:(id)arg3;
- (BOOL)createDarwinNotificationProxiesWithError:(id *)arg1;
- (BOOL)createDarwinNotificationProxy:(id)arg1 toSimAs:(id)arg2 withState:(BOOL)arg3 error:(id *)arg4;
- (BOOL)clearTmpWithError:(id *)arg1;
- (BOOL)ensureLogPathsWithError:(id *)arg1;
- (BOOL)supportsFeature:(id)arg1;
@property(readonly, copy) NSString *launchdJobName;
- (void)saveToDisk;
- (id)saveStateDict;
- (void)validateAndFixState;
@property(readonly, retain) SimRuntime *runtime;
@property(readonly, retain) SimDeviceType *deviceType;
@property(readonly, copy) NSString *descriptiveName;
- (id)description;
- (id)initDevice:(id)arg1 UDID:(id)arg2 deviceTypeIdentifier:(id)arg3 runtimeIdentifier:(id)arg4 state:(unsigned long long)arg5 deviceSet:(id)arg6;
- (BOOL)unpairIDSRelayWithDevice:(id)arg1 error:(id *)arg2;
- (BOOL)setActiveIDSRelayDevice:(id)arg1 error:(id *)arg2;
- (BOOL)disconnectIDSRelayToDevice:(id)arg1 error:(id *)arg2;
- (BOOL)connectIDSRelayToDevice:(id)arg1 disconnectMonitorPort:(unsigned int *)arg2 error:(id *)arg3;

@end