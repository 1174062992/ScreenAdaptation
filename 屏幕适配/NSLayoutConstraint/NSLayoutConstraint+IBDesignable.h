//
//  NSLayoutConstraint+IBDesignable.h
//  ReactiveCocoa
//
//  Created by 曹记 on 2019/3/30.
//  Copyright © 2019 曹记. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSLayoutConstraint (IBDesignable)
@property(nonatomic, assign) IBInspectable BOOL adaptive;
@end

NS_ASSUME_NONNULL_END
