// Celsius to Fahrenheit
#include <stdio.h>
main()
{
    float f=0,c=0;
    printf("Enter Temp in Celsius: ");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("Temp in Fahrenheit is %.2f",f);
    printf("\n");
}
