//Function-Array-Pointer
#include<stdio.h>
main()
{
    int displaysum(int *);
    int arr[5],i,*p,sum;
    srand(time(0));
    for (i=0;i<5;i++)
    {
        arr[i]=rand()%100;
    }
    for (i=0;i<5;i++)
    {
        printf("\n%u - %d",&arr[i],arr[i]);
    }
    printf("\n");
    sum=displaysum(arr); // displaysum(&arr[0]) or displaysum(&arr) // Arrays are by default called by refernce
    printf("\nSum of Elements is %d",sum);
    printf("\n");
}
int displaysum(int *x)
{
    int i,sum;
    for (i=0;i<5;i++)
    {
        sum=sum+*x;
        x++;
    }
    return (sum);
}
