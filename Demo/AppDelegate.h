//
//  AppDelegate.h
//  Demo
//
//  Created by LIJO RAJU on 12/07/17.
//  Copyright © 2017 LIJORAJU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

