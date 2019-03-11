//
//  AppDelegate.h
//  FrameworkApp

#import <UIKit/UIKit.h>
#import <testframework/testframework.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, AppDelProtocolDelegate, iCloudDBDelegate>

@property (weak,nonatomic) id<iCloudDBDelegate>iCloudDBDelegate;

@property (strong, nonatomic) UIWindow *window;

-(void)crashLog:(NSString*)message, ...;

@end

