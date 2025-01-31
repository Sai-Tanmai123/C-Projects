//Print Each Character in our name
#include<stdio.h>
main()
{
    char ch[100],i,*a;
    printf("Enter ur Name: ");
    gets(ch);
    a=&ch;
    while (*a!='\0')
    {
        printf("\n%u - %c",a,*a);
        a++;
    }

}
