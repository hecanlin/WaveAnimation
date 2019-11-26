//
//  HCLWaveAnimationView.h
//  HCLWaveAnimationDemo
//
//  Created by 贺灿林 on 2019/11/26.
//  Copyright © 2019 贺灿林. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HCLWaveAnimationView : UIView

/**
 振幅A
 */
@property (nonatomic, assign) CGFloat alpha;

/**
 角速度ω
 */
@property (nonatomic, assign) CGFloat omega;

/**
 初相φ
 */
@property (nonatomic, assign) CGFloat phi;

/**
 偏距k
 */
@property (nonatomic, assign) CGFloat kappa;


/**
 移动速度
 */
@property (nonatomic, assign) CGFloat speed;

@end

