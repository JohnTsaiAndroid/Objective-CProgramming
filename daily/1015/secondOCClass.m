
#import<Foundation/Foundation.h>
@interface Person: NSObject

{
    @public
    int age;
    double weight;
  
}
-(void)walk;
-(void)info;


@end

@implementation Person
-(void)walk
{
    NSLog(@"walking!");
}

-(void)info
{
    NSLog(@"age=%d,weight=%.1f",age,self->weight);
}

@end


int main()
{

    Person *tom = [Person new];
    
    tom->age = 22;
    tom->weight = 130.2;
    
    [tom info];
    
    NSLog(@"%lu",sizeof(tom));
    
    [tom walk];
    return 0;

}
