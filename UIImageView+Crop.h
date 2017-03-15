//
//  UIImageView+Crop.h
//  Alert
//
//  Created by 李志华 on 17/2/28.
//  Copyright (c) 2017年 李志华. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (Crop)
//下面两种方法都是设置UIImageView圆角的方法，第二种方法内存的消耗最少啊，而且渲染快速
- (void)imageWithCornerRadius:(CGFloat)radius;
- (void)setCornerRadius:(CGFloat)radius;
//只设置顶部圆角
- (void)setTopCornerRadius:(CGFloat)radius;
//只设置底部圆角
- (void)setBottomCornerRadius:(CGFloat)radius;
@end
