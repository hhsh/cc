#include <stdio.h>
main()
{
    int c;
    int n = 0;
    int i;
    c = getchar();
    while( c != 'q')
    {  
        putchar(c);
        n++;
        c = getchar();
    }
    printf("%d\n",n);
}
