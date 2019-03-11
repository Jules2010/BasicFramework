//
//  ViewController.m
//  FrameworkApp

#import "ViewController.h"
#import "AppDelegate.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSLog(@"ViewController.viewDidLoad");
    
    AppDelegate *appDel = (AppDelegate*) [[UIApplication sharedApplication] delegate];
    //appDel.gboo_DB_UseCalendar = YES;
    NSArray *removables = @[@"1", @"2"];
    ApplicationCloudKit *ack = [[ApplicationCloudKit alloc] init: self];
    
    [ack deleteAllRecords: appDel removables: removables];
}

-(void)crashLog:(NSString *)message, ...
{
    NSLog(@"VC %@", message);

}

@end
