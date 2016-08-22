//
//  NMAutoHeightTableCell.h
//  PZHAutoLayoutDemo
//
//  Created by nuomi on 16/7/5.
//  Copyright © 2016年 nuomi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NMAutoHeightTableCell : UITableViewCell

/**
 * 使用该方法给Cell赋值
 *
 */

- (void)setInfo:(id)info;

/**
 * 使用该方法获取Cell高度
 *
 */
- (CGFloat)getHeightWidthInfo:(id)info;
@end
