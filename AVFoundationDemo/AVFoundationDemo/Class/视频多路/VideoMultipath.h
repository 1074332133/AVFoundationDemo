//
//  VideoMultipath.h
//  AVFoundationDemo
//
//  Created by 是不是傻呀你 on 2019/3/2.
//  Copyright © 2019 是不是傻呀你. All rights reserved.
//

#import "MultipathAsset.h"

@interface VideoMultipath : NSObject

- (AVPlayerItem *)makePlayerItemWithAssets:(NSArray<MultipathAsset *> *)assets size:(CGSize)size;
@end
