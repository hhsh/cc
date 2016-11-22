

#include<stdio.h>
#include<stdlib.h>
struct stuff{
    int age;
    float height;
    char *name;
} * im,* am;
struct stuff * es(struct stuff *);

int main()
{
    am = (struct stuff *) malloc( sizeof(*am)); 
    (*am).age = 10;
    am->age = 30;
    am->height = 32;
    am->name ="shan";
    im = am;
    printf("%s\n",im->name);
    es(im);
    printf("%s\n",im->name);
    return 0;
}
struct stuff * es(struct stuff * s) {
    s->name = "feng";
    printf("%s\n",s->name);
    return s;
}
