#import<Foundation/Foundation.h>

NSString* getBoolString(BOOL value)
{
   return value==YES?@"YES":@"NO";
}

int main()
{
    BOOL b = YES;
    BOOL b2 = NO;
    BOOL b3 = 1;//YES
    BOOL b4 = 0;//NO
    
    NSLog(@"b=%d,b2=%d,b3=%@,b4=%@",b,b2,getBoolString(b3),getBoolString(b4));
    
    return 0;
}
