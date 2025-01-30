// Using Fflush(stdin)
#include <stdio.h>
main()
{
    char g,name[100];
    int age=0;
    printf("Enter ur Name: ");
    scanf("%s",&name);
    printf("Enter ur Age: ");
    scanf("%d",&age);
    fflush(stdin);
    printf("Enter ur Gender (m/f): ");
    scanf("%c",&g);
    printf("Hey you are %s , with %d years and you are %c",name,age,g);
    printf("\n");
}
