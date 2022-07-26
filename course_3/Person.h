//
//  Person.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//	accomplished by zhaojian on 2022/7/25.

#import <Foundation/Foundation.h>
#import "CoreLocation/CLLocation.h"

NS_ASSUME_NONNULL_BEGIN

@interface Address : NSObject
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *province;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) CLLocation *location;
@end

@interface Person : NSObject
// public
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSNumber *idNumber;
@property (nonatomic, strong) Person *mother;
@property (nonatomic, strong) Person *father;
@property (nonatomic, strong) NSDate *birthday;
@property (nonatomic, strong) Address *address;
@property (nonatomic, readonly) NSDate *registerDate;
@property (nonatomic, assign, readonly) NSInteger age;

- (instancetype)initWithName:(NSString *)name address:(Address *)address birthday:(NSDate *)birthday;

- (void)bindMother:(Person *)mother;
- (void)bindFather:(Person *)father;

@end

NS_ASSUME_NONNULL_END
