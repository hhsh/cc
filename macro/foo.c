

#include<stdio.h>
#define myMax(a,b)  a>b?a:b
#define sq(x) x * x
#define dbprint(expr) printf(#expr " = %g\n" ,expr)
int main()
{
    int mx = myMax(40,30);
    int rs = sq(6+2);
    printf("%d\n",mx);
    printf("%d\n",rs);
    printf("hello  " "world " "\n");
    double d = 5.66;
    dbprint(d);
    return 0;
}
