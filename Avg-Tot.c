// Avg and Total
#include<stdio.h>
main()
{
    int m=0,p=0,c=0,e=0,s=0;
    float t=0,a=0;
    printf("Enter Maths Marks: ");
    scanf("%d",&m);
    printf("Enter Physics Marks: ");
    scanf("%d",&p);
    printf("Enter Chemistry Marks: ");
    scanf("%d",&c);
    printf("Enter English Marks: ");
    scanf("%d",&e);
    printf("Enter Sanskrit Marks: ");
    scanf("%d",&s);
    t=m+p+c+e+s;
    a=t/5;
    printf("Total is %.0f and Average is %.2f%%",t,a);
    printf("\n");
}
