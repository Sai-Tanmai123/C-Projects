// Vowel or Consonant using Chain Function
#include<stdio.h>
int checkv(char);
int checkc(char);
main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if (checkv(ch))
        printf("%c is Vowel",ch);
    else
        printf("%c is Consonant",ch);
    printf("\n");
}

int checkv(char ch)
{
    if (checkc(ch))
    {
        ch=tolower(ch);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            return 1;
        else
            return 0;
    }
}
int checkc(char ch)
{
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        return 1;
    else
    {
        printf("Invalid Input");
        exit(0);
    }
}
