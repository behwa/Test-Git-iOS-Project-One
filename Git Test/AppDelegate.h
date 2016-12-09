//
//  AppDelegate.h
//  Git Test
//
//  Created by Thum Wei Wah on 09/12/2016.
//  Copyright © 2016 Thum Wei Wah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

