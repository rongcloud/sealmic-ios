//
//  RCMicOnLineViewController.h
//  SealMic
//
//  Created by rongyun on 2020/6/3.
//  Copyright © 2020 rongcloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCMicRoomViewModel.h"
NS_ASSUME_NONNULL_BEGIN
//在线用户列表
@interface RCMicOnLineViewController : UIViewController
@property (nonatomic, strong) RCMicRoomViewModel *viewModel;
@end

NS_ASSUME_NONNULL_END
