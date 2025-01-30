// Elder
#include <stdio.h>
main()
{
    int a=0,b=0;
    char x[100],y[200];
    printf("Enter ur Name: ");
    scanf("%[^\n]",&x);
    printf("Enter ur Age: ");
    scanf("%d",&a);
    fflush(stdin);
    printf("Enter ur Name: ");
    scanf("%[^\n]",&y);
    printf("Enter ur Age: ");
    scanf("%d",&b);
    if (a>b)
        printf("%s is Elder",x);
    else
        printf("%s is Elder",y);
    printf("\n");
}
