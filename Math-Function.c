// Math Function
#include<stdio.h>
#include<math.h>
main()
{
    int no=625;
    int a=-1;
    int b=3,p=10;
    float x=100.25;
    int y=1,z=8;
    system("cls");
    system("color F1");
    printf("%lf is the Square Root of %d",sqrt(no),no);
    printf("\nAbsoulte of %d is %d",a,abs(a));
    printf("\n%d Power of %d is %lf",b,p,pow(b,p));
    printf("\nFloor of %f is %lf",x,floor(x));
    printf("\nCeil of %f is %lf",x,ceil(x));
    printf("\ne^x is %lf",exp(y));
    printf("\nlog10(y) is %lf",log10(y));
    printf("\nlog(y) is %lf",log(y+1));
    printf("\nFloating Point Remainder of %d and %d is %lf",z,b,fmod(z,b));
    printf("\n");
}

