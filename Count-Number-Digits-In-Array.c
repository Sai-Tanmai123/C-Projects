// Count No of Digits in each Array Element
#include <stdio.h>
main()
{
    int a=0,i,j,d=0;
    printf("Enter How Many Elements in the Array (1-100): ");
    scanf("%d",&a);
    int ar[a],br[a];
    srand(time(0));
    for (i=0;i<a;i++)
    {
        ar[i]=rand()%100;
    }
    printf("\nArray is\n");
    for (i=0;i<a;i++)
    {
        printf("\t%d",ar[i]);
    }
    for (i=0;i<a;i++)
    {
        if (ar[i]==0)
            br[i]=1;
        else
        {
            d=0;
            while(ar[i]!=0)
            {
                j=ar[i]%10;
                d=d+1;
                ar[i]=ar[i]/10;
            }
            br[i]=d;
        }
    }
    printf("\nNo of Digits of each element is\n");
    for (i=0;i<a;i++)
    {
        printf("\t%d",br[i]);
    }
    printf("\n");
}
