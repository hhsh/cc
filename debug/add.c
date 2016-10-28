#include<stdio.h>

int sum(int, int);

int main()
{
    int result;
    int a = 1, b = 2;
    result = sum(a, b);
    printf("%d + %d = %d\n", a, b, result);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
