// Unformatted Input and Output Func
#include <stdio.h>
main()
{
    char ch;
    printf("Enter a Character: ");
    ch=getchar();
    putchar(ch);
    putchar('A'); // Only single character, doesn't goto another line (\n cannot be used)

    printf("\n");
}
