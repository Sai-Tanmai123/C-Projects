// Length of the String without strlen
#include<stdio.h>
main()
{
    char name[100];
    int i,len=0;
    printf("Enter Your Name: ");
    scanf("%s",&name);
    for (i=0;name[i]!=0;i++)
    {
        len++;
    }
    printf("Length of string is %d",len);
    printf("\n");
}
