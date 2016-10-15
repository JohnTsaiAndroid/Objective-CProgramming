/*

 类：
  1.类名
  2.属性
  3.行为

 类的声明和实现：
 1.类的声明 
 声明对象的属性，行为
 @interface ClassName
 {
 }
 @end
 
 2.类的实现
 @implementation ClassName
 @end
 
 */

#import<Foundation/Foundation.h>

@interface Car:NSObject
{
    //声明对象属性
    @public
    int wheels;
    int speed;
    
}
@end

@implementation Car


@end

int main()
{
    //执行Car类的new行为创建对象
    Car * car = [Car new];
    car->wheels = 4;
    car->speed = 120;
    NSLog(@"%@",car);
    NSLog(@"wheels = %d,speed = %d",car->wheels,car->speed);
    return 0;
}
