// Different Arrays
#include<stdio.h>
main()
{
    int no[3],i;
    long long mob[3];
    double avg[3];
    for (i=0;i<3;i++)
    {
        printf("Enter %d Roll No, Mobile No, and Average Marks: ",i+1);
        scanf("%d%lld%lf",&no[i],&mob[i],&avg[i]);
    }
    printf("\n******************************");
    printf("\n\tStudent Marks List\n");
    printf("*******************************\n");
    printf("Roll No\t Mobile No\t Average\n");
    printf("```` ``\t `````` ``\t ```````\n");
    for (i=0;i<3;i++)
    {
        printf("\n%5d\t%1lld%15.2lf",no[i],mob[i],avg[i]);
    }
    printf("\n");
}


