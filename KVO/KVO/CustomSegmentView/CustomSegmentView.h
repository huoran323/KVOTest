//
//  CustomSegmentView.h
//  KVO
//
//  Created by apple on 2018/2/9.
//  Copyright © 2018年 huoran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomSegmentView : UIView

- (void)configForTitles:(NSArray<NSString*>*)titles;
@property (nonatomic, assign) NSInteger number; //记录titles的个数

@end
