//
//  ViewController.h
//  MengMailCore
//
//  Created by menglc on 16/5/22.
//  Copyright © 2016年 menglc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsViewController.h"

@interface ViewController : UITableViewController<SettingsViewControllerDelegate>

- (IBAction)showSettingsViewController:(id)sender;

@end

