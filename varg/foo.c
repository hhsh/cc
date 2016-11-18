















#include<stdio.h>
#include <stdarg.h>

float aveInt(int v,...);
int main()
{
    printf("%f\n",aveInt(2,9,2));
    printf("%f\t",aveInt(4,3,4,6,8));
    
    return 0;
}
float aveInt(int v,...)
{
    float rtVal = 0;
    int i=v;
    
    va_list ap;
    va_start(ap,v);
    while(i>0){
        rtVal+=va_arg(ap,int);
        i--;
    }
    va_end(ap);
    return rtVal /= v;
}
