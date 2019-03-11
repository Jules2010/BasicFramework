//
//  ViewController.h
//  FrameworkApp

#import <UIKit/UIKit.h>
#import <testframework/testframework.h>

@interface ViewController : UIViewController <iCloudDBDelegate>

@property (weak,nonatomic) id<iCloudDBDelegate>iCloudDBDelegate;

-(void)crashLog:(NSString*)message, ...;

@end

