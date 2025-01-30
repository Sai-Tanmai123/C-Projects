// Ternary Operators
#include <stdio.h>
main()
{
    5>5 ? printf("\nWelcome"):printf("\nByee");
    5+5 ? printf("\nHii"):printf("\nByee"); // 5+5=10 - Non zero so Hi is executed
    10%2 ? printf("\nIdiot"):printf("\nStupid");
    // Larger of 2 Numbers
    int a=0,b=0;
    printf("\nEnter 2 Nos: ");
    scanf("%d%d",&a,&b);
    a>b ? printf("%d is Larger",a):printf("%d is Larger",b);
    printf("\n");

    int x=5,y=10,res;
    x>y ? res=x : (res=y);
    printf("\n%d",res); // res=10
}
