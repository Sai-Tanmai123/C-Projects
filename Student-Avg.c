// Student Avg
#include<stdio.h>
main()
{
    int a=0;
    printf("Enter ur Avg Marks: ");
    scanf("%d",&a);
    if (a>=60)
        printf("First Class....."); // You can also use if (a>=60 && a<100) for first class also
    else
        if (a>=50)
            printf("Second Class....");
        else
            if (a>=40)
                printf("Third Class....");
            else
                printf("Fail :(");
    printf("\n");
}
