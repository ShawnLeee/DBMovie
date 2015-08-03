//
//  DBMovieCast.h
//  MVVM
//
//  Created by Daniel on 15/8/3.
//  Copyright (c) 2015年 ddd. All rights reserved.
//
@class DBMovieAvatar;
#import <Foundation/Foundation.h>

@interface DBMovieCast : NSObject
@property (nonatomic,copy) NSString *alt;
@property (nonatomic,strong) DBMovieAvatar *avatars;
@property (nonatomic,assign) long long id;
@property (nonatomic,copy) NSString *name;
@end
