// Grade for MPC
#include <stdio.h>
main()
{
    int m=0,p=0,c=0;
    float a=0;
    printf("Enter ur Maths Marks: ");
    scanf("%d",&m);
    printf("Enter ur Physics Marks: ");
    scanf("%d",&p);
    printf("Enter ur Chemistry Marks: ");
    scanf("%d",&c);
    a=(m+p+c)/3.0;
    if (a>=90)
        printf("A+");
    else
        if (a>=80)
            printf("A");
        else
            if (a>=70)
                printf("B+");
            else
                if (a>=60)
                    printf("B");
                else
                    if (a>=50)
                        printf("C");
                    else
                        if (a>=40)
                            printf("D");
                        else
                            printf("Fail :(");
    printf("\nYour avg mark is %.2f %%",a);
    printf("\n");
}
