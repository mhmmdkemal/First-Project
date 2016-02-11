//
//  DetailViewController.h
//  First Project
//
//  Created by Mohammed Kemal on 2/11/16.
//  Copyright © 2016 Mohammed Kemal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

