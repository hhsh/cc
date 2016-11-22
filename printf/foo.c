
#include <stdio.h>

int main()
{
    int a = 90;
    int * c = &a;
    int * d = c;
    printf("%p\t%p\n",c,d);
    //printf((char *)90);
    int i =0;
    for(i=0;i<10;i++)
    printf("%15g",562.123456789);
    int rs = 0;
   ( rs +=a) - 5;
    char * s = "a";
    int q = * (int *)(s+=1)-1;
    printf("\nrs=%d\n",rs);
    printf("q=%d\n",q);
    return 0;
}
