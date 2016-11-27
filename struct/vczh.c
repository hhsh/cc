#include<stdio.h>
struct S
{
    union {
        int i;
    };
    struct{
        int x;
    };
}s;
struct {
    int i;
}t={
    56,
};
struct X{
    struct {int i;}f;
    struct {int i;}g;
}x;
int main()
{
    s.i = 90;
    s.x = 40;
    printf("%d\n",s.i);
    printf("%d\n",s.x);
    printf("%d\n",t.i);
    x.f.i= 60;
    x.g.i= 70;
    printf("%d\n",x.f.i);
    printf("%d\n",x.g.i);
    return 0;
}
