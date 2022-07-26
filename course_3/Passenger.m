//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//  accomplished by zhaojian on 2022/7/25.

#import "Passenger.h"

@implementation Date

- (instancetype)initWithYear:(int)year andMonth:(int)month andDay:(int)day
{
    self = [super init];
    if(self)
    {
        _year = year;
        _month = month;
        _day = day;
    }
    return self;
}

@end

@implementation Order

- (instancetype)initWithId:(int)id andLocation:(CLLocation*)location andDate:(Date)date andBudget:(int)budget andCost:(int)cost
{
    self = [super init];
    if(self)
    {
        _id = id;
        _location = location;
        _date = date;
        _budget = budget;
        _cost = cost;
    }  
    return self;
}
@end

@implementation Orders

-(instancetype)initWithOrders: (Order*)orders andNumber: (int)number
{ 
    self = [super init];
    if(_number>=_maxNumber)
    return nil;
    else{
        if(self)
        {
            _orders = orders;
            _number = number;
        }  
        return self;
    }
}
- (instancetype)init
{
    return [self initWithOrders:nil andNumber:0];
}

@end

@implementation Passenger
- (instancetype)initWithName:(NSString *)name address:(Address *)address birthday:(nonnull NSDate *)birthday andReach18:(bool)R18 andHistryOrder:(order*)horder andNoTravelOrder:(order*)nTorder
{
    self = [super initWithName:name andAddress:address andBirthday:birthday];
    if(self)
    {
        _reach18 = R18;
        _histryorder = horder;
        _noTravelOrder = nTorder;
    }  
    return self;
}

-(void)getTicket:(Order)order
{
    _noTravelOrder._Orders[_number] = order;
    _noTravelOrder._number++;
}

-(void)checkOutTicket:(Order)order
{
    _noTravelOrder._Orders[_number] = nil;
    _noTravelOrder._number--;
    _histryOrder._Orders[_number] = order;
    _histryOrder._number++;
}
@end
