//
//  ResultData.h
//  FlightQueryDemo
//
//  Created by HongPu on 2015/11/19.
//  Copyright © 2015年 HongPu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FlightInfo;

@interface ResultData : NSObject

// 解析结果
@property (nonatomic, strong) NSMutableArray<FlightInfo *> *arrayResult;
//
- (id)initWithData:(NSData *)data;

@end
