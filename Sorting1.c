//Sorting
#include<stdio.h>
main()
{
     int s=0,j,i,temp=0;
     printf("Enter Array Size: ");
     scanf("%d",&s);
     int a[s];
     srand(time(0));
     for (i=0;i<s;i++)
     {
         a[i]=(rand()%100)+1;
     }
     printf("\nOriginal Array is\n\n");
     for (i=0;i<s;i++)
     {
         printf("\t%d",a[i]);
     }

     // Sorting Logic Descending
     for (i=0;i<s;i++)
     {
         for (j=i+1;j<s;j++)
         {
             if (a[i]<a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
         }
     }
     printf("\n");
     for (i=0;i<s;i++)
     {
         printf("\t%d",a[i]);
     }

     // Sorting Logic Ascending
     printf("\n");
     for (i=0;i<s;i++)
     {
         for (j=i+1;j<s;j++)
         {
             if (a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
         }
     }
     for (i=0;i<s;i++)
     {
         printf("\t%d",a[i]);
     }
    printf("\n");
}

