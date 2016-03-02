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
/**
 *  初始化并显示红包
 *
 *  @param rewardInfo 红包信息
 */
- (void)initRedPacketWindow:(RewardInfo*)rewardInfo;
@end
