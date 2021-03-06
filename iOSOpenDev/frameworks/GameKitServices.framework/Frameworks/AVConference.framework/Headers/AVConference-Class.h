/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVConference.h>
#import <AVConference/XXUnknownSuperclass.h>

@class NSObject, NSMutableDictionary, NSDictionary, NSTimer, SwitchDetector, CALayer;
@protocol AVConferenceDelegate, AVConferenceNotificationObserver;

@interface AVConference : XXUnknownSuperclass {
	id opaqueConf;	// 4 = 0x4
	BOOL useServer;	// 8 = 0x8
	BOOL runningInServer;	// 9 = 0x9
	void *serverConnection;	// 12 = 0xc
	NSObject<AVConferenceDelegate> *delegate;	// 16 = 0x10
	NSObject<AVConferenceNotificationObserver> *genericObserver;	// 20 = 0x14
	dispatch_queue_s *notificationQueue;	// 24 = 0x18
	NSMutableDictionary *notificationDictionary;	// 28 = 0x1c
	NSDictionary *serverBag;	// 32 = 0x20
	opaque_pthread_mutex_t blobMutex;	// 36 = 0x24
	opaque_pthread_cond_t blobCond;	// 80 = 0x50
	NSMutableDictionary *blobDict;	// 108 = 0x6c
	SwitchDetector *detector;	// 112 = 0x70
	BOOL useSwitchDetector;	// 116 = 0x74
	BOOL testIsRunning;	// 117 = 0x75
	BOOL shouldDisplayNetworkQualityGraph_;	// 118 = 0x76
	NSTimer *networkQualityUpdateTimer_;	// 120 = 0x78
	CALayer *networkQualityGraphLayer_;	// 124 = 0x7c
}
@property(assign) NSObject<AVConferenceDelegate> *delegate;	// G=0x3c5d; S=0x3c6d; @synthesize
@property(assign) NSObject<AVConferenceNotificationObserver> *genericObserver;	// G=0x3c3d; S=0x3c4d; @synthesize
@property(assign) BOOL shouldDisplayNetworkQualityGraph;	// G=0x3c1d; S=0x3c2d; @synthesize=shouldDisplayNetworkQualityGraph_
@property(retain) NSTimer *networkQualityUpdateTimer;	// G=0x5001; S=0x4fdd; @synthesize=networkQualityUpdateTimer_
@property(retain) CALayer *networkQualityGraphLayer;	// G=0x503d; S=0x5019; @synthesize=networkQualityGraphLayer_
@property(readonly, assign) BOOL natType;	// G=0x5f09; 
@property(assign, getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;	// G=0x5ec1; S=0x6079; 
@property(readonly, assign) int remoteFrameWidth;	// G=0x68c1; 
@property(readonly, assign) int remoteFrameHeight;	// G=0x69f5; 
@property(readonly, assign) int localFrameWidth;	// G=0x6b29; 
@property(readonly, assign) int localFrameHeight;	// G=0x6c5d; 
@property(readonly, assign) double roundTripTime;	// G=0x647d; 
@property(readonly, assign) double localPacketLossRate;	// G=0x65e9; 
@property(readonly, assign) double remotePacketLossRate;	// G=0x6755; 
@property(readonly, assign, getter=getRemoteBitrate) double remoteBitrate;	// G=0x6d91; 
@property(readonly, assign, getter=getRemoteFramerate) double remoteFramerate;	// G=0x6de1; 
@property(readonly, assign, getter=getLocalBitrate) double localBitrate;	// G=0x6e31; 
@property(readonly, assign, getter=getLocalFramerate) double localFramerate;	// G=0x6e81; 
@property(assign) void *remoteVideoBackLayer;	// G=0x7579; S=0x6ed1; 
@property(assign) void *remoteVideoLayer;	// G=0x75c5; S=0x7095; 
@property(assign) void *localVideoBackLayer;	// G=0x7839; S=0x7611; 
@property(assign) void *localVideoLayer;	// G=0x7885; S=0x7725; 
@property(assign, nonatomic) BOOL requiresWifi;	// G=0x41b5; S=0x42a5; 
@property(readonly, assign) float inputMeterLevel;	// G=0x7969; 
@property(readonly, assign) float outputMeterLevel;	// G=0x79b9; 
@property(assign, nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;	// G=0x7a59; S=0x7a09; 
@property(assign, nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;	// G=0x7af1; S=0x7aa1; 
@property(assign, nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;	// G=0x78d1; S=0x7919; 
@property(assign, getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;	// G=0x85a9; S=0x8559; 
@property(retain) id localVideoAttributes;	// G=0x4ba5; S=0x55a1; converted property
+ (void)refreshLoggingParameters;	// 0x4fa9
+ (short)addressPointerFromBlob:(id)blob;	// 0x4f95
+ (id)externalAddressForSelfConnectionBlob:(id)selfConnectionBlob;	// 0x4f19
+ (void)startAudioSession;	// 0x4e5d
+ (void)stopAudioSession;	// 0x4da1
+ (unsigned)doBlockingConnectionCheck;	// 0x4cbd
- (void)listenForNotifications;	// 0x3c7d
- (void)stopListeningForNotifications;	// 0x3cdd
- (void)updateGKSConnectivitySettings;	// 0x9179
- (void)handleGKSConnectivitySettingsUpdate:(id)update;	// 0x3d15
- (id)init;	// 0x8d4d
- (void)warmupForCall;	// 0x8be5
- (void)testIsPausedProc:(id)proc;	// 0x8a19
- (id)initWithFlags:(int)flags;	// 0x87d1
- (void)dealloc;	// 0x85f1
// declared property getter: - (BOOL)isUsingViceroyBlobFormat;	// 0x85a9
// declared property setter: - (void)setUseViceroyBlobFormat:(BOOL)format;	// 0x8559
- (void)setSetSessionID:(id)anId forCallID:(int)callID;	// 0x3d25
- (void)addGKSCallEvent:(id)event sessionID:(id)anId;	// 0x3df9
- (id)connectionBlobForParticipantID:(id)participantID callID:(int *)anId error:(id *)error;	// 0x80c5
- (void)setPeerCN:(id)cn callID:(int)anId;	// 0x3ea9
- (void)setSessionID:(id)anId callID:(int)anId2;	// 0x3f99
- (double)networkQualityForCallID:(int)callID;	// 0x4089
// declared property getter: - (BOOL)requiresWifi;	// 0x41b5
// declared property setter: - (void)setRequiresWifi:(BOOL)wifi;	// 0x42a5
- (id)convertBlobtoOldBlob:(id)blob;	// 0x8041
- (id)convertBlobtoNewBlob:(id)blob;	// 0x7fbd
- (BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities error:(id *)error;	// 0x7d89
- (BOOL)startConnectionWithParticipantID:(id)participantID callID:(int)anId connectionID:(id)anId3 usingBlob:(id)blob isCaller:(BOOL)caller capabilities:(id)capabilities error:(id *)error;	// 0x439d
- (void)stopCallID:(int)anId;	// 0x7cf1
- (void)remoteCancelledCallID:(int)anId;	// 0x7c59
- (void)setCallReport:(int)report withReport:(id)report2;	// 0x7bdd
- (BOOL)setActive:(BOOL)active;	// 0x7b8d
- (void)receivedRealTimeData:(id)data fromParticipantID:(id)participantID;	// 0x7b39
// declared property getter: - (BOOL)isOutputMeteringEnabled;	// 0x7af1
// declared property setter: - (void)setOutputMeteringEnabled:(BOOL)enabled;	// 0x7aa1
// declared property getter: - (BOOL)isInputMeteringEnabled;	// 0x7a59
// declared property setter: - (void)setInputMeteringEnabled:(BOOL)enabled;	// 0x7a09
// declared property getter: - (float)outputMeterLevel;	// 0x79b9
- (BOOL)getIsAudioPaused:(char *)paused callID:(int)anId error:(id *)error;	// 0x43cd
- (BOOL)getIsVideoPaused:(char *)paused callID:(int)anId error:(id *)error;	// 0x452d
// declared property getter: - (float)inputMeterLevel;	// 0x7969
// declared property setter: - (void)setMicrophoneMuted:(BOOL)muted;	// 0x7919
// declared property getter: - (BOOL)isMicrophoneMuted;	// 0x78d1
- (id)currentAudioInputDevice;	// 0x46a9
- (BOOL)setAudioInputDevice:(id)device;	// 0x47cd
// declared property getter: - (void *)localVideoLayer;	// 0x7885
// declared property getter: - (void *)localVideoBackLayer;	// 0x7839
// declared property setter: - (void)setLocalVideoLayer:(void *)layer;	// 0x7725
// declared property setter: - (void)setLocalVideoBackLayer:(void *)layer;	// 0x7611
// declared property getter: - (void *)remoteVideoLayer;	// 0x75c5
// declared property getter: - (void *)remoteVideoBackLayer;	// 0x7579
- (float)networkQuality;	// 0x48e1
- (BOOL)updateNetworkQualityGraph;	// 0x7259
- (void)startNetworkQualityUpdateTimer;	// 0x4925
- (void)stopNetworkQualityUpdateTimer;	// 0x4a19
// declared property setter: - (void)setRemoteVideoLayer:(void *)layer;	// 0x7095
// declared property setter: - (void)setRemoteVideoBackLayer:(void *)layer;	// 0x6ed1
// declared property getter: - (double)getLocalFramerate;	// 0x6e81
// declared property getter: - (double)getLocalBitrate;	// 0x6e31
// declared property getter: - (double)getRemoteFramerate;	// 0x6de1
// declared property getter: - (double)getRemoteBitrate;	// 0x6d91
// declared property getter: - (int)localFrameHeight;	// 0x6c5d
// declared property getter: - (int)localFrameWidth;	// 0x6b29
// declared property getter: - (int)remoteFrameHeight;	// 0x69f5
// declared property getter: - (int)remoteFrameWidth;	// 0x68c1
// declared property getter: - (double)remotePacketLossRate;	// 0x6755
// declared property getter: - (double)localPacketLossRate;	// 0x65e9
// declared property getter: - (double)roundTripTime;	// 0x647d
- (id)statsForCallID:(int)callID;	// 0x62a9
- (int)getRemoteVideoSlot:(BOOL)slot;	// 0x61b9
- (int)getLocalVideoSlot:(BOOL)slot;	// 0x60c9
// declared property setter: - (void)setEnableSpeakerPhone:(BOOL)phone;	// 0x6079
// declared property getter: - (BOOL)natType;	// 0x5f09
// declared property getter: - (BOOL)isSpeakerPhoneEnabled;	// 0x5ec1
- (BOOL)startPreviewWithError:(id *)error;	// 0x4a59
- (BOOL)startPreview:(BOOL)preview withError:(id *)error;	// 0x5d1d
- (void)stopPreview;	// 0x5c99
- (BOOL)isRunningPreview;	// 0x5c51
- (BOOL)setPauseAudio:(BOOL)audio callID:(int)anId error:(id *)error;	// 0x5bc9
- (void)applyServerInfo:(id)info;	// 0x4a75
- (BOOL)setPauseVideo:(BOOL)video callID:(int)anId error:(id *)error;	// 0x5b41
- (BOOL)setServerInfo:(id)info;	// 0x596d
- (id)localScreenAttributesForVideoAttributes:(id)videoAttributes;	// 0x4a9d
- (void)setLocalScreenAttributes:(id)attributes;	// 0x5799
// converted property getter: - (id)localVideoAttributes;	// 0x4ba5
// converted property setter: - (void)setLocalVideoAttributes:(id)attributes;	// 0x55a1
- (unsigned)doBlockingConnectionCheck;	// 0x4ca1
- (void)videoConference:(id)conference didStartSession:(BOOL)session withCallID:(int)callID error:(id)error;	// 0x54c1
- (void)videoConference:(id)conference didStopWithCallID:(int)callID error:(id)error;	// 0x53f5
- (void)videoConference:(id)conference updateInputMeterLevel:(float)level;	// 0x53b5
- (void)videoConference:(id)conference updateOutputMeterLevel:(float)level;	// 0x5375
- (void)videoConference:(id)conference notificationEvent:(id)event;	// 0x5331
- (void)processRelayRequestResponse:(int)response responseDict:(id)dict didOriginateRequest:(BOOL)request;	// 0x5131
- (void)processRelayUpdate:(int)update updateDict:(id)dict didOriginateRequest:(BOOL)request;	// 0x5055
- (void)processCancelRelayRequest:(int)request cancelDict:(id)dict didOriginateRequest:(BOOL)request3;	// 0x3c19
// declared property getter: - (id)networkQualityGraphLayer;	// 0x503d
// declared property setter: - (void)setNetworkQualityGraphLayer:(id)layer;	// 0x5019
// declared property getter: - (id)networkQualityUpdateTimer;	// 0x5001
// declared property setter: - (void)setNetworkQualityUpdateTimer:(id)timer;	// 0x4fdd
// declared property getter: - (BOOL)shouldDisplayNetworkQualityGraph;	// 0x3c1d
// declared property setter: - (void)setShouldDisplayNetworkQualityGraph:(BOOL)displayNetworkQualityGraph;	// 0x3c2d
// declared property getter: - (id)genericObserver;	// 0x3c3d
// declared property setter: - (void)setGenericObserver:(id)observer;	// 0x3c4d
// declared property getter: - (id)delegate;	// 0x3c5d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3c6d
@end

@interface AVConference (Private)
- (void)processServerSideApplicationQuery:(id)query responseDict:(id *)dict;	// 0x92b5
- (void)processApplicationQuery:(id)query responseDict:(id *)dict;	// 0xa3d1
- (void)addTransaction:(id)transaction outputDictionary:(id *)dictionary;	// 0xa549
- (void)setRemoteVideoLayerContentsRect:(CGRect)rect camera:(int)camera;	// 0xa755
- (void)asyncConnectionBlobRequestForParticipantID:(id)participantID transactionID:(id)anId;	// 0xa91d
- (void)receivedConnectionBlob:(id)blob forTransactionID:(id)transactionID callID:(id)anId error:(id)error;	// 0xabdd
- (void)serverReconnected;	// 0xa9c1
- (void)serverDied;	// 0xaa75
@end
