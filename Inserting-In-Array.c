// Inserting a New Element in the Array
/*Logic Completely Written Based on Positions NOT INDEX*/
#include<stdio.h>
main()
{
    int a[100];
    int s=0,i,no=0,p=0;
    printf("Enter How Many Elements You want to store (1-100): ");
    scanf("%d",&s);
    if (s>0 && s<100)
    {
        srand(time(0));
        for (i=0;i<s;i++)
        {
            a[i]=(rand()%100)+1;
        }
        printf("\nArray Elements\n");
        for (i=0;i<s;i++)
        {
            printf("\t%d",a[i]);
        }
        printf("\n\nEnter New Element to be Inserted: ");
        scanf("%d",&no);
        printf("Enter the Position (1-%d): ",s+1);
        scanf("%d",&p);
        if (!(p>=1 && p<=(s+1)))
        {
            printf("\nEnter Valid Position....");
            exit(0);
        }
        // Logic to Insert New Element
        for (i=s;i>=p;i--)
        {
            a[i]=a[i-1];
        }
        a[p-1]=no;
        s++; // Since New Element Added

        printf("\n\nNew Array after Insertion\n");
        for (i=0;i<s;i++)
        {
            printf("\t%d",a[i]);
        }
    }
    else
    {
        printf("\nEnter Valid No....");
        exit(0);
    }
    printf("\n");
}

