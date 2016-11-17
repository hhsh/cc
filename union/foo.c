
#include<stdio.h>

typedef union {
    int a;
    char b;
    double c;
} dem;
int main()
{
    dem d;
    d.a = 20;
    d.b = 'a';
    d.c = 10.2;
    printf("%lu\n",sizeof(d));// long unsign int
    printf("%d\n",d.a);
    printf("%c\n",d.b);
    printf("%f\n",d.c);
    return 0;
}
