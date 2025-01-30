// Palindrome or Not using Functions
#include<stdio.h>
main()
{
    int pali(char[]);
    char ch[1000];
    int i;
    printf("Enter a String: ");
    fflush(stdin);
    scanf("%s",&ch);
    pali(ch);
    if (pali(ch))
        printf("%s is Palindrome",ch);
    else
        printf("%s is not a Palindrome",ch);
    printf("\n");
}
int pali(char x[1000])
{
    int i,d,c;
    char ap='Y';
    d=strlen(x);
    for (i=0;i<d;i++,d--)
    {
        if (x[i]!=x[d-1])
            ap='N';
    }
    if (ap=='Y')
        return 1;
    else
        return 0;
}
