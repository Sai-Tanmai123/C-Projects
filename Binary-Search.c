// Binary Search
#include <stdio.h>
main()
{
    int a=0,i,j,temp=0,c=0,mid=0,lb,d=0;
    printf("Enter the Size of the Array: ");
    scanf("%d",&a);
    int b[a],ub=0;
    srand(time(0));
    for (i=0;i<a;i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&d);
        b[i]=d;
    }
    for (i=0;i<a;i++)
    {
        for (j=i+1;j<a;j++)
        {
            if (b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("\n\n");
    printf("Sorted Array is\n");
    for (i=0;i<a;i++)
    {
        printf("\t%d",b[i]);
    }
    // Sorted
    printf("\nEnter a Key Element to Search: ");
    scanf("%d",&c);
    lb=0;
    ub=a-1;
    for (i=0;i<a;i++)
    {
        mid=(lb+ub)/2;
        if (c>b[mid])
            lb=mid+1;
        else
            if (c<b[mid])
                ub=mid-1;
            else
                if (c==b[mid])
                {
                    printf("\n%d is Found at index %d",c,mid);
                    break;
                }
    }
    printf("\n");
}
