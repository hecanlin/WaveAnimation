//
//  ViewController.m
//  HCLWaveAnimationDemo
//
//  Created by 贺灿林 on 2019/11/26.
//  Copyright © 2019 贺灿林. All rights reserved.
//

#import "ViewController.h"
#import "HCLWaveAnimationView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    HCLWaveAnimationView *animationView = [[HCLWaveAnimationView alloc] initWithFrame:CGRectMake(20, 100, self.view.bounds.size.width-40, 500)];
    animationView.alpha = 15;
    animationView.kappa = 200;
    animationView.speed = 6;
    [self.view addSubview:animationView];
}


@end
