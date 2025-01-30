// Tot avg Array 2
#include<stdio.h>
main()
{
   int s,i,tot=0;
   float avg=0;
   printf("How many Subjects do you want to enter: ");
   scanf("%d",&s);
   int a[s]; // Declaring array at runtime
   for (i=0;i<s;i++)
   {
       printf("Enter %d Subject: ",i+1);
       scanf("%d",&a[i]);
       tot=tot+a[i];
   }
   avg=(float)tot/s;
   for (i=0;i<s;i++)
   {
       printf("%d+",a[i]);
   }
   printf("\b=%d is the Total Marks",tot);
   printf("\n%f is the Average Marks",avg);
   printf("\n");
}

