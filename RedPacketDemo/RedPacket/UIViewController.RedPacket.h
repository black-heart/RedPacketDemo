//
//  UIViewController+RedPacket.h
//  RedPacketDemo
//
//  Created by lll on 16/3/1.
//  Copyright © 2016年 llliu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RewardInfo.h"

@interface UIViewController (RedPacket)
@property (nonatomic, strong) UIView     *windowUv;
@property (nonatomic, strong) RewardInfo *rewardInfoForRedPacket;
- (void)initRedPacketWindow:(RewardInfo*)rewardInfo;
@end
