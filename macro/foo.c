

#include<stdio.h>
#define myMax(a,b)  a>b?a:b
#define sq(x) x * x
#define dbprint(expr) printf(#expr " = %g\n" ,expr)
#define paste(a,b) a ## b
int main()
{
    int mx = myMax(40,30);
    int rs = sq(6+2);
    printf("%d\n",mx);
    printf("%d\n",rs);
    printf("hello  " "world " "\n");
    double d = 5.66;
    dbprint(d);
    char * name3 = "learn";
    printf("%s\n",paste(name,3));

    char a = 'u';
    char *s = &a;
    int b = *(int *)s;//quote from va_arg(ap,t)
    printf("%d\n",b);
    return 0;
}
