// Switch Case Fall Through
#include <stdio.h>
main()
{
    char ch;
    printf("Enter Color Code (r/g/b): ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'r':
        case 'R': printf("Red");break;
        case 'g':
        case 'G': printf("Green");break;
        case 'b':
        case 'B': printf("Blue");break;
        default: printf("Please Enter Correct Color Code\a");break;
    }
    printf("\n");
}
