//
//  ApplicationCloudKit.h
//  testframework

#import <Foundation/Foundation.h>
#import "AppDelProtocol.h"
#import "iCloudDBProtocol.h"

@class AppDelInterface;
@class iCloudDBDelegate;

@interface ApplicationCloudKit : NSObject <iCloudDBDelegate>

@property (weak,nonatomic) id<iCloudDBDelegate>iCloudDBDelegate;

-(id)init:(id<iCloudDBDelegate>)delegate;

-(void)deleteAllRecords:(id<AppDelProtocolDelegate>)appDel removables:(NSArray*)removables;


@end

