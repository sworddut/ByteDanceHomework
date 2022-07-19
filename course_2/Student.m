#import "Student.h"

@implementation Student


-(float)study:(float)Time{
    NSLog(@"已经学习了%f小时",Time)
}

@end

int main(){
    Student *stu=[Student new];
    [stu study:5.00];
    return(0);
}
