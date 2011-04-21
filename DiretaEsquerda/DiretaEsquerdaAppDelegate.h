//
//  DiretaEsquerdaAppDelegate.h
//  DiretaEsquerda
//
//  Created by Anderson Dantas Duarte on 21/04/11.
//  Copyright 2011 Popcode Mobile Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiretaEsquerdaViewController;

@interface DiretaEsquerdaAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DiretaEsquerdaViewController *viewController;

@end
