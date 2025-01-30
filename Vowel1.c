// Vowel or Not
#include <stdio.h>
main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("%c is a Vowel",ch);
    }
    else
        printf("Please enter an Alphabet\a....");
    printf("\n");
}
