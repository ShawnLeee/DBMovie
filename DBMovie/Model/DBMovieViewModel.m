//
//  DBMovieViewModel.m
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//

#import "DBMovieViewModel.h"
#import "DBMovie.h"
#import "DBMovieImage.h"
@interface DBMovieViewModel ()
@property (nonatomic,readwrite) DBMovie *movie;
@property (nonatomic,readwrite) NSString *image;
@property (nonatomic,readwrite) NSString *movieTitle;
@property (nonatomic,readwrite) NSString *movieDetail;
@end
@implementation DBMovieViewModel
- (instancetype)initWithMovie:(DBMovie *)movie
{
    if (self = [super init]) {
        _image = movie.images.small;
        _movieTitle = movie.title;
    }
    return self;
}
@end
