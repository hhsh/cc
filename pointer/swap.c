
#include <stdio.h>
int main()
{
    void swap(int *,int *);

   int a = 69,b = 78;
   int *x = &a,*y = &b;
   swap(x,y);
   printf("x=%d,y=%d\n",*x,*y); 
   return 0;
}

void swap(int *a,int *b)
{
    int t ;
    t = *a;
    *a = *b;
    *b = t;
}
