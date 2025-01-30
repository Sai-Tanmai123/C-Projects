// Calculator Program
#include <stdio.h>
main()
{
    printf("Calculator For 2 Numbers....\n");
    printf("`````````` ``` ` ```````````\n");
    printf("\n1)Addition\n");
    printf("2)Subtraction\n");
    printf("3)Multiplication\n");
    printf("4)Division (Result)\n");
    printf("5)Remainder\n");
    printf("6)Squaring\n");
    printf("7)Cubing\n");
    printf("8)Exit\n");

    int o=0,c=0,d=0;
    float a=0,b=0;
    printf("Choose Your Option (1-8): ");
    scanf("%d",&o);
    if (o<=8)
    {
        if (o==1)
        {
            printf("Enter 2 Numbers: ");
            scanf("%f%f",&a,&b);
            printf("Sum is %.2f",a+b);
        }
        if (o==2)
        {
            printf("Enter 2 Numbers: ");
            scanf("%f%f",&a,&b);
            printf("Difference is %.2f",a-b);
        }
        if (o==3)
        {
            printf("Enter 2 Numbers: ");
            scanf("%f%f",&a,&b);
            printf("Product is %.2f",a*b);
        }
        if (o==4)
        {
            printf("Enter 2 Numbers: ");
            scanf("%f%f",&a,&b);
            printf("Result is %.2f",a/b);
        }
        if (o==5)
        {
            printf("Enter 2 Numbers: ");
            scanf("%d%d",&c,&d);
            printf("Remainder is %d",c%d);
        }
        if (o==6)
        {
            printf("Enter a Number: ");
            scanf("%f",&a);
            printf("Square of %.2f is %.4f",a,a*a);
        }
        if (o==7)
        {
            printf("Enter a Number: ");
            scanf("%f",&a);
            printf("Cube of %.2f is %.4f",a,a*a*a);
        }
        if (o==8)
            exit(0);
    }
    else
        printf("\aPlease Enter Correct Option");
    printf("\n");
}
