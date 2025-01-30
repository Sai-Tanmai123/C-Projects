// Do While Importance
#include <stdio.h>
#include <ctype.h>
main()
{
    char ch;
    int v=0,c=0;
    do
    {
        printf("Enter a Character: ");
        fflush(stdin);
        ch=getchar();
        if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        {
            ch=tolower(ch);
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                v++;
            }
            else
                c++;
        }
    }while(ch!='x');
    printf("\nNo of Vowels are: %d",v);
    printf("\nNo of Consonants are: %d",(c-1));
    printf("\n");
}
