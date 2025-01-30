// Total and Average By Arrays
#include<stdio.h>
main()
{
    int m[100],i,tot=0,s=0;
    float avg=0;
    printf("Enter How many subjects you want to enter (Less than 100 Subjects): ");
    scanf("%d",&s);
    if (s>100)
    {
        printf("Invalid No of Subjects\a");
        exit(0);
    }
    for (i=0;i<s;i++)
    {
        printf("Enter Marks of Subject %d : ",i+1);
        scanf("%d",&m[i]);
    }
    for (i=0;i<s;i++)
    {
        tot=tot+m[i];
    }
    for (i=0;i<s;i++)
    {
        if (i==s-1)
            printf("%d",m[i]);
        else
            printf("%d+",m[i]);
    }
    avg=(float)tot/s;

    printf("=%d is Total Marks",tot);
    printf("\n%f is Average",avg);
    printf("\n");
}

