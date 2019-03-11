//
//  ApplicationCloudKit.m
//  testframework

#import "ApplicationCloudKit.h"

@implementation ApplicationCloudKit
@synthesize iCloudDBDelegate;

-(id)init:(id<iCloudDBDelegate>)delegate
{
    if (self = [super init])
    {
        self.iCloudDBDelegate = delegate;
    }
    
    if (self.iCloudDBDelegate == nil)
    {
#       ifndef NDEBUG
        raise(SIGTRAP);
#       endif
    }
    return self;
}

-(void)deleteAllRecords:(id<AppDelProtocolDelegate>)appDel removables:(NSArray*)removables
{
    [self.iCloudDBDelegate crashLog:@" message from framework"];
    
    if (appDel.gboo_DB_UseCalendar == YES)
    {
        NSLog(@"HERE");
    }
}


@end
