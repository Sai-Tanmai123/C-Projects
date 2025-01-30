// Vote Eligibility
#include <stdio.h>
main()
{
    int a=0;
    printf("Enter ur Age: ");
    scanf("%d",&a);
    if (a>=18)
        printf("You are Eligible to Vote....");
    else
        printf("You have to wait %d more years :(",18-a);
    printf("\n");
}
