// Fahrenheit to Celsius
#include <stdio.h>
main()
{
    float f=0,c=0;
    printf("Enter Temp in Fahrenheit: ");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("Temp in Celsius is %.2f",c);
    printf("\n");
}
