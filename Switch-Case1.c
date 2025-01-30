// Read and Display No in words
#include <stdio.h>
main()
{
    int a=0;
    printf("Enter a No (1-9): ");
    scanf("%d",&a);
    switch (a)
    {
        case 1: printf("One");break;
        case 2: printf("Two");break;
        case 3: printf("Three");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eight");break;
        case 9: printf("Nine");break;
        default : printf("Please Enter (1-9) only"); break;
    }
}
