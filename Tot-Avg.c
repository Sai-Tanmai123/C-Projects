// Total and Average
#include <stdio.h>
main()
{
    int m=0,p=0,c=0;
    float tot=0,avg=0;
    printf("Enter Maths Marks: ");
    scanf("%d",&m);
    printf("Enter Physics Marks: ");
    scanf("%d",&p);
    printf("Enter Chemistry Marks: ");
    scanf("%d",&c);
    tot=m+p+c;
    avg=tot/3;
    printf("Total is %.0f and Average is %.4f%%",tot,avg);
    printf("\n");
}
