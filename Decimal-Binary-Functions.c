// Decimal to Binary
#include<stdio.h>
main()
{

    long long d2b(int);
    int no=0;
    printf("Enter a Number: ");
    scanf("%d",&no);
    printf("Number in Binary Format is: ");
    d2b(no);
    printf("\n");
}
long long d2b(int x)
{
    int y=0,i=0,j=0;
    y=x;
    int arr[20];
    while(y!=0)
    {
        arr[i]=y%2;
        y=y/2;
        i++;
    }
    i--;
    for (i;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
