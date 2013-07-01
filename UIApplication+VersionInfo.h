//
//  UIApplication+VersionInfo.h
//  MHAboutView
//
//  Created by Maryan Hratson on 2013-06-30.
//  Copyright (c) 2013 Maryan Hratson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (VersionInfo)

+(NSString *) versionBuild;
+(NSString *) bundleName;
+(NSString *) versionFull;
+(NSString *) machineName;

@end
