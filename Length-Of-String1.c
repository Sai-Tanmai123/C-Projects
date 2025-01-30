// Length of the String without strlen
#include<stdio.h>
main()
{
    char name[100];
    int i,len=0,c=0;
    printf("Enter Your Name: ");
    scanf("%[^\n]",&name);
    for (i=0;name[i]!=0;i++)
    {
        len++;
        if(name[i]==' ')
            c=c+1;
    }
    printf("Length of string is %d",len-c);
    printf("\n");
}
