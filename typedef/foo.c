#include<stdlib.h>
int main(){
    typedef struct {
        int a;
       // Self * b;
    }Self;
    
    typedef struct  nd{
        int a;
        struct nd * b;
    }Self2;
    
    struct A { 
        int a;
        struct B * b;
    } a = {
        102,
        NULL
    };
    struct B { 
        int a;
        struct A * b;
    }b = {
        156,
        &a
    };
    //printf("A.a %d\n",a.a);
    printf("B.a %d\n",b.a);
    printf("B.b %d\n",b.b->a);
    return 0;
}
