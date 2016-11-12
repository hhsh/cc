
#include <stdio.h>

int f()
{
    printf("this is a function\n");
    return 20;
}
int main()
{
    printf("dd\n");
    char *  s = "hello";
    int a = 560,b = 100;
    int *   i = &a,*j = &b;
    printf("%s\n",s);
    printf("%d\n",*  i);


    int * pi  [] = { j,i};
    printf("%d\n", *pi[0]);
    int (* pf) () = f;
    pf();
    return 0;
}
