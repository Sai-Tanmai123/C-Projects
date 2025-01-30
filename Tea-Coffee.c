// Tea or Coffee
#include <stdio.h>
main()
{
    char c;
    printf("What do you want Tea (T) or Coffee (C): ");
    scanf("%c",&c);
    if (c=='T')
        printf("Here is your Tea, with a 15%% discount :)");
    else
        printf("Here is your Coffee with a 10%% discount :)");
    printf("\n");
}
