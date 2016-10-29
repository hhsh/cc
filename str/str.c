#include <stdio.h>


int main()
{

    char  s[] = "hello " 

          "world\n";
    printf("%s",s);
    
    int lower(int);
    int c = 'G';
    int d = lower(c);
    printf("%d\n",d);
    printf("%c\n",d);
    return 0;
}


int lower(int c)
{
    if(c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    }
    else 
    {
        return c;
    }

}
