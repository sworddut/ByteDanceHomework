//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//	accomplished by zhaojian on 2022/7/25.

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Date : NSObject
@property(nonatomic, assign) int year;
@property(nonatomic, assign) int month;
@property(nonatomic, assign) int day;

-(instancetype)initWithYear:(int)year andMonth: (int)month andDay: (int)day	// 单个订单
@end

@interface Order : NSObject
@property(nonatomic, assign) int id;
@property(nonatomic, copy) CLLocation* location;
@property(nonatomic, copy) Date* date;
@property(nonatomic, assign) int budget;
@property(nonatomic, assign) int cost;

-(instancetype)initWithId:(int)id andLocation: (CLLocation*)location andDate: (Date)date andBudget: (int)budget andCost: (int)cost
@end

@interface Orders : NSObject	// 订单数组
@property(nonatomic, copy) Order* orders;
@property(nonatomic, assign) int number;	// 目前数目
@property(nonatomic, assign) int maxNumber=500;	// 最大数目

-(instancetype)initWithOrder: (Order*)orders andNumber: (int)Number
@end


// @property 属性
@interface Passenger : Person
@property(nonatomic, assign) bool reach18;	// 是否年满 18 岁
@property(nonatomic, copy) Orders histryOrder;	// 历史订单 （数组）
@property(nonatomic, copy) Orders noTravelOrder;	// 未出行订单 （数组）


// Function 方法
-(void)getTicket:(Orders)order;	// 去订票

-(void)checkOutTicket:(Orders)order;	// 去检票
@end

NS_ASSUME_NONNULL_END
