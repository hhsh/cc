#include <stdio.h>

int main()
{
    int a = 780;
    int * p = &a;
    
    char * cp = "hello\n";
    printf("%d\n",*p);
    printf("%s",cp);
    return 0;
}
