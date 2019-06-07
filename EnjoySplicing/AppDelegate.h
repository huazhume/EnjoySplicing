//
//  AppDelegate.h
//  EnjoySplicing
//
//  Created by 华 on 2019/6/7.
//  Copyright © 2019年 EnjoySplicing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

