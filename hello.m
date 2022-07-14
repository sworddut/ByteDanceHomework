#import <Foundation/Foundation.h>
int main(void){
    NSAutoreleasePool* pool = [[NSAutoreleasePool alloc] init];
    // Your code here!
    NSLog(@"Hello, World! ");
    NSString *s = @"XXXXXXXX";
    [[NSFileHandle fileHandleWithStandardOutput] writeData: [s dataUsingEncoding: NSUTF8StringEncoding]];
    [pool release];
    return 0;
}