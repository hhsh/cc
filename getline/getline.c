#include<stdio.h>
#define MAXLINE 10

int mygetline(char s[],int limit);

int main()
{
    char line [MAXLINE];
    mygetline(line,MAXLINE);
    printf("%s",line);
    //printf("%s",&line); //this is also ok,but compiler will warn.
    char *s = "hello";
    printf("%s\n",s);
    return 0;
}

int mygetline(char s[],int limit)
{
    int c,i;
    for(i=0;i<limit && (c = getchar()) != EOF && c != '\n' ;i++)
    {
        s[i] = c;
    }
    if(c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

