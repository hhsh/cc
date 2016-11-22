

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
struct stuff es(struct stuff);

int main()
{
    char str[10] = "Hello.";
    char * pstr = "Hi!";
    pstr = "Hi there";//can do this!
    printf("%s\n",str);
    printf("%s\n",pstr);
    //str = "world";//can not do this
   struct stuff am = {
        23,
        180.5,
        "shanshan",
    };     
    im = am;
    printf("%s\n",im.name);
    es(im);
    printf("%s\n",im.name);
    return 0;
}
struct stuff es(struct stuff s) {
    s.name[0] = 'H';
    printf("%s\n",s.name);
    return s;
}
