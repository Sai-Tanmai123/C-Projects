// Delete an Array element and copy the after element to that index
#include <stdio.h>
main()
{
    int a=0,i,c=0;
    printf("Enter How many Array Elements (1-100): ");
    scanf("%d",&a);
    srand(time(0));
    int ar[a];
    for (i=0;i<a;i++)
    {
        ar[i]=(rand()%100)+1;
    }
    printf("\nThe Array with %d Elements is\n",a);
    for (i=0;i<a;i++)
    {
        printf("\t%d",ar[i]);
    }
    printf("\nEnter which Position you want to delete (1-%d): ",a);
    scanf("%d",&c);
    for (i=0;i<a;i++)
    {
        if (c==(i+1) && (c<=a))
        {
            while(i<=a)
            {
                ar[i]=ar[i+1];
                i++;
            }
            a=a-1;
            break;
        }
    }
    printf("\nNew Array after Deleting Element is and it's size is %d\n",a);
    for (i=0;i<a;i++)
    {
        printf("\t%d",ar[i]);
    }
    printf("\n");
}
