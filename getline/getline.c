#include<stdio.h>
#define MAXLINE 10

int mygetline(char s[],int limit);

main()
{
    char line [MAXLINE];
    mygetline(line,MAXLINE);
    printf("%s",&line);
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

