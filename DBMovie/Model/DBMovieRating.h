//
//  DBMovieRating.h
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBMovieRating : NSObject
@property (nonatomic,copy) NSString *average;
@property (nonatomic,assign) int max;
@property (nonatomic,assign) int min;
@property (nonatomic,assign) int stars;
@end
