//
//  ETViewController.h
//  HelloCocoa
//
//  Created by Tim Chang on 2/12/12.
//  Copyright (c) 2012 tim.kri@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ETViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;
@property (weak, nonatomic) IBOutlet UIButton *helloBtn;
- (IBAction)sayHello:(id)sender;

@end
