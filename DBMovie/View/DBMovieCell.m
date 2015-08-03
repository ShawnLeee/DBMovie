//
//  DBMovieCell.m
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//

#import "DBMovieCell.h"
#import "UIImageView+WebCache.h"
#import "DBMovie.h"
#import "DBMovieImage.h"
#import "DBMovieCast.h"
#import "DBMovieDirector.h"
@implementation DBMovieCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        self = [[[NSBundle mainBundle] loadNibNamed:@"DBMovieCell" owner:nil options:nil] lastObject];
    }
    return self;
}
- (void)setMovie:(DBMovie *)movie
{
    _movie = movie;
    [self.movieImage setImageWithURL:[NSURL URLWithString:movie.images.small]];
    [self.movieTitle setTitle:movie.title forState:UIControlStateNormal];
    __block NSMutableString *movieDetail = [NSMutableString string];
    [movieDetail appendString:@"导演:"];
    [movie.directors enumerateObjectsUsingBlock:^(DBMovieDirector *director, NSUInteger idx, BOOL *stop) {
        [movieDetail appendString:director.name];
    }];
    [movieDetail appendString:@" 主演:"];
    [movie.casts enumerateObjectsUsingBlock:^(DBMovieCast *cast, NSUInteger idx, BOOL *stop) {
        [movieDetail appendString:[NSString stringWithFormat:@"%@ ",cast.name]];
    }];
    self.movieIntroduction.text = [movieDetail copy];
}
@end
