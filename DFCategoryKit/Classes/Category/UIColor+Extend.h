//
//  UIColor+Extend.h
//  aragorn
//
//  Created by dzw on 18/11/23.
//  Copyright © 2018年 dzw. All rights reserved.
//
#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:A]
#define RGB_COLOR(R, G, B) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:1.0f]
#import <UIKit/UIKit.h>

@interface UIColor (Extend)
+ (UIColor *)colorWithExtString:(NSString *)color;
+ (UIColor *)colorWithExtString:(NSString *)color alpha:(float)alpha;
@end
