//
//  BIDDetailViewController.h
//  Liston_Presidents
//
//  Created by Benjamin on 8/11/16.
//  Copyright (c) 2016 Benjamin. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface BIDDetailViewController : UIViewController <UISplitViewControllerDelegate,
UIPopoverControllerDelegate>
@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel; @property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (strong, nonatomic) UIBarButtonItem *languageButton;
@property (strong, nonatomic) UIPopoverController *languagePopoverController; @property (copy, nonatomic) NSString *languageString;
@end
