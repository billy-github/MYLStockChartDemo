//
//  WYHorScreenView.h
//  WYStock
//
//  Created by myl on 2017/5/11.
//  Copyright © 2017年 myl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WYHorScreenView : UIView

@property (nonatomic,strong)StockDataModel    *stock;


- (id)initWithFrame:(CGRect)frame SelecIndex:(NSInteger)selectIndex;

- (void)getDataWithSelectIndex:(NSInteger)selectIndex;
@end