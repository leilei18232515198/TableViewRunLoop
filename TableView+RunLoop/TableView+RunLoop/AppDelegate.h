//
//  AppDelegate.h
//  TableView+RunLoop
//
//  Created by 268Edu on 2018/9/6.
//  Copyright © 2018年 QRScan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

