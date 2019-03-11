//
//  iCloudDBProtocol.h
//  iCloudDBFramework


#import <Foundation/Foundation.h>

//see https://stackoverflow.com/a/12660523/450456

@protocol iCloudDBDelegate<NSObject>

//@required
@optional
-(void)crashLog:(NSString*)message, ...;

@end
