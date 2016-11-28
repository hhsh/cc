
#include <stdio.h>
struct {
    unsigned int is_keyword : 1;
    unsigned int is_extern:1;
    unsigned int is_static : 1;
    unsigned int :1;
} flags;
enum F{
    kw = 001,ext = 002, st = 003
} f = st;
int main()
{
    printf("%d\n",f);
    flags.is_keyword = 0;
    return 0;
}
