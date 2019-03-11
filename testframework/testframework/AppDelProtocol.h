//
//  AppDelProtocol.h
//  iCloudDBFramework

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AppDelProtocolDelegate <NSObject>

//@required
@property (readwrite, assign) BOOL      gboo_NSUD_KEY_BACKED_Initial_User_Handled;
@property (readwrite, assign) BOOL      gboo_NSUD_KEY_BACKED_iCloud_CustomZone_Exists;

// user configuration via settings
@property (readwrite, assign) BOOL      gboo_DB_UseSound; // #UCS - define
@property (readwrite, assign) BOOL      gboo_DB_UseiCloud; // #UCS - define
@property (readwrite, assign) BOOL      gboo_DB_UseCalendar; // #UCS - define

@property (nonatomic, retain) NSDate   *gdat_SESSION_syncLockKey;
@property (nonatomic) NSInteger         gint_SESSION_activeiCloudInProgressCount;
@property (nonatomic, retain) NSDate   *gdat_SESSION_lastiCloudCheck;
@property (readwrite, assign) BOOL      gboo_SESSION_cloudSubscriptionsSubscribed;

-(void)checkOrWaitForiCloudUpdate:(BOOL)isStarting calledBy:(NSString*)calledBy;
-(void)resetLastiCloudCheck;
-(void)startiCloudCheckProcess:(BOOL)withoutiCloudReCheck;

@end
