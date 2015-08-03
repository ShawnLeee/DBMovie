//
//  DBMovieCell.h
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//
@class DBMovie;
#import <UIKit/UIKit.h>

@interface DBMovieCell : UITableViewCell
@property (nonatomic,strong) DBMovie *movie;
@property (weak, nonatomic) IBOutlet UIImageView *movieImage;
@property (weak, nonatomic) IBOutlet UIButton *movieTitle;
@property (weak, nonatomic) IBOutlet UILabel *movieIntroduction;

@end
