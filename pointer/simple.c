#include <stdio.h>

int main()
{
    int a = 780,b = 450,c = 90;
    int * p = &a;
    int * q = p;
   //p = 8990;
   // printf("trash:%d\n",*p);
    
   // char * cp = "hello\n";
    printf("%d\n",*p);
    printf("%d\n",*q);
    p = &b;
//    p++ // points to next pointer,this situation is pointer q.
    printf("%d\n",*p);
    printf("%d\n",*q);

   // printf("%s",cp);
    return 0;
}
