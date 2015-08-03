//
//  DBMovieViewModel.h
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//
@class DBMovie;
#import <Foundation/Foundation.h>

@interface DBMovieViewModel : NSObject
- (instancetype)initWithMovie:(DBMovie *)movie;
@property (nonatomic,readonly) DBMovie *movie;
@property (nonatomic,readonly) NSString *image;
@property (nonatomic,readonly) NSString *movieTitle;
@property (nonatomic,readonly) NSString *movieDetail;
@end
