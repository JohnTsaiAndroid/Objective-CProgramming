#import<Foundation/Foundation.h>

@interface Person : NSObject
{
   @public
    int age;
    double weight;
}

-(void)walk;
-(void)eat;
-(void)info;
@end

@implementation Person

-(void)walk{
    NSLog(@"walking...");
}

-(void)eat{
    NSLog(@"eating...");
}

-(void)info{
    NSLog(@"age=%d weight=%.1f",age,weight);
}

@end

int main()
{

    Person * p = [Person new];
    p->age = 20;
    p->weight = 130;
    [p info];
    [p walk];
    [p eat];
}
