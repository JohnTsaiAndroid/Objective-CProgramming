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
//OC对象的方法，需以减号(-)开头
//OC方法中的小括号用于括住数据类型
-(void)run;
@end

@implementation Car

-(void)run
{
    NSLog(@"The car is running!");
}

@end

int main()
{
    //执行Car类的new行为创建对象
    Car * car = [Car new];
    Car * anotherCar = [Car new];
    
    car->wheels = 4;
    car->speed = 120;
    
    //给anotherCar所指向的对象发送run消息
    [anotherCar run];
    
    NSLog(@"%@",car);
    NSLog(@"%@",anotherCar);
    NSLog(@"%lu",sizeof(int));
    NSLog(@"wheels = %d,speed = %d",car->wheels,car->speed);
    return 0;
}
