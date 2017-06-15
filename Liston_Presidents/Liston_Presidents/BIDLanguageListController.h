//
//  BIDLanguageListController.h
//  
//
//  Created by Benjamin on 8/11/16.
//
//

#import <UIKit/UIKit.h>
@class BIDDetailViewController;
@interface BIDLanguageListController : UITableViewController
@property (weak, nonatomic) BIDDetailViewController *detailViewController;
@property (copy, nonatomic) NSArray *languageNames;
@property (copy, nonatomic) NSArray *languageCodes;
@end
