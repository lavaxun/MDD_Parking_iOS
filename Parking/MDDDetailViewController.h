//
//  MDDDetailViewController.h
//  Parking
//
//  Created by xun on 9/7/13.
//  Copyright (c) 2013 hackathon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
