// Const Keyword
#include <stdio.h>
main()
{
    int r=0;
    float area=0;
    const float pi=3.14;
    printf("Enter Radius: ");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of Circle is %.3f",area);
    printf("\n");
}
