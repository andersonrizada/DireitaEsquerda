//
//  DiretaEsquerdaViewController.h
//  DiretaEsquerda
//
//  Created by Anderson Dantas Duarte on 21/04/11.
//  Copyright 2011 Popcode Mobile Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DiretaEsquerdaViewController : UIViewController {
    
    IBOutlet UILabel *msgText;
}

@property (retain, nonatomic) UILabel *msgText;

- (IBAction)esquerdo:(id)sender;
- (IBAction)direito:(id)sender;

@end
