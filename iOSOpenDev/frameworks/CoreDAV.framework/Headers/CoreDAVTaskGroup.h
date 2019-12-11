/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/XXUnknownSuperclass.h>

@class NSMutableSet, NSError;
@protocol CoreDAVTaskManager, CoreDAVTaskGroupDelegate, CoreDAVAccountInfoProvider;

@interface CoreDAVTaskGroup : XXUnknownSuperclass {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	double _timeoutInterval;	// 12 = 0xc
	NSMutableSet *_outstandingTasks;	// 20 = 0x14
	BOOL _isCancelling;	// 24 = 0x18
	BOOL _isTearingDown;	// 25 = 0x19
@private
	id<CoreDAVTaskGroupDelegate> _delegate;	// 28 = 0x1c
	id _progressBlock;	// 32 = 0x20
	id _completionBlock;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
}
@property(readonly, assign) NSMutableSet *outstandingTasks;	// G=0x1bd1d; @synthesize=_outstandingTasks
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x1bc85; @synthesize=_accountInfoProvider
@property(readonly, assign) id<CoreDAVTaskManager> taskManager;	// G=0x1bd61; @synthesize=_taskManager
@property(retain, nonatomic) NSError *error;	// G=0x1bce9; S=0x1bcf9; @synthesize=_error
@property(copy, nonatomic) id completionBlock;	// G=0x1bc95; S=0x1bca5; @synthesize=_completionBlock
@property(copy, nonatomic) id progressBlock;	// G=0x1bd2d; S=0x1bd3d; @synthesize=_progressBlock
@property(assign) double timeoutInterval;	// G=0x1bd71; S=0x1bda5; @synthesize=_timeoutInterval
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// G=0x1bcc9; S=0x1bcd9; @synthesize=_delegate
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x1bda5
// declared property getter: - (double)timeoutInterval;	// 0x1bd71
// declared property getter: - (id)taskManager;	// 0x1bd61
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x1bd3d
// declared property getter: - (id)progressBlock;	// 0x1bd2d
// declared property getter: - (id)outstandingTasks;	// 0x1bd1d
// declared property setter: - (void)setError:(id)error;	// 0x1bcf9
// declared property getter: - (id)error;	// 0x1bce9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1bcd9
// declared property getter: - (id)delegate;	// 0x1bcc9
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x1bca5
// declared property getter: - (id)completionBlock;	// 0x1bc95
// declared property getter: - (id)accountInfoProvider;	// 0x1bc85
- (void)finishCoreDAVTaskGroupWithError:(id)error;	// 0x1bbc9
- (void)cancelTaskGroup;	// 0x1bb51
- (void)bailWithError:(id)error;	// 0x1bb09
- (void)_tearDownAllTasks;	// 0x1b9c9
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x1b9c5
- (void)syncAway;	// 0x1b9b5
- (void)startTaskGroup;	// 0x1b9b1
- (void)dealloc;	// 0x1b881
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x1b7d9
@end