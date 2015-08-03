//
//  DBMovie.h
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//
@class DBMovieImage,DBMovieRating;
#import <Foundation/Foundation.h>

@interface DBMovie : NSObject
@property (nonatomic,copy) NSString *alt;
@property (nonatomic,strong) NSArray *casts;
@property (nonatomic,strong) NSArray *directors;
@property (nonatomic,strong) NSArray *genres;
@property (nonatomic,assign) long long id;
@property (nonatomic,strong) DBMovieImage *images;
@property (nonatomic,copy) NSString *original_title;
@property (nonatomic,strong) DBMovieRating *rating;
@property (nonatomic,copy) NSString *subtype;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *year;
@end
