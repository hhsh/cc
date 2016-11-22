

#include<stdio.h>
//extern struct stuff;

struct stuff{
    int age;
    float height;
    char name [10];
}im;
struct ball {
    char brand [10];
};
 
int main()
{
   struct stuff am = {
        23,
        180.5,
        "shanshan",
    };     
    im = am;
    printf("%s\n",im.name);
    return 0;
}

