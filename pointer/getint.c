
#include<stdio.h>

 #include <ctype.h>
int SIZE = 5;


int getch(void);
void ungetch(int);

int getint(int *pn)
{
    int c,sign;
    while(isspace(c=getch()))
        ;
    if(!isdigit(c) && c!= EOF  && c !='+' && c != '-'){
        ungetch(c);
        return 0;
    }
    sign = (c == '-')? -1:1;
    if(c == '+' || c =='-'){
        c = getch();
    }
    for(*pn =0 ;isdigit(c);c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if(c != EOF)
        ungetch(c);
    return c ;
}
void pr(int arr [])
{
    printf("\n-------\n");
    int i=0;
    for(;i<SIZE;i++)
        printf("%d\n",arr[i]);
    printf("\n-------\n");

} 
 int main()
{

    int n,arr[SIZE];//,getint(int * );
    pr(arr);
    for(n=0;n<SIZE && getint(&arr[n]) != EOF;n++)
        ;
    pr(arr);
    return 0;
}
