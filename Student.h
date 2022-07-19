@interface Student : NSObject

@property(nonatomic, copy) NSString* name;
@property(nonatomic, copy) NSString* major;
@property(nonatomic, assign) int age;


-(float)compareWithAge:(float)Time;


@end

