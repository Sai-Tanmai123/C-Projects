// Hid Password with Stars
#include<stdio.h>
main()
{
    int i,len;
    char name[100],pwd[100],ch;
    printf("Enter User Name: ");
    scanf("%s",&name);
    printf("Enter Your Password: ");
    while(1)
    {
        fflush(stdin);
        ch=getch();
        printf("*");
        if (ch==13)
            break;
        else
        {
            pwd[i]=ch;
            i++;
        }
    }
    printf("\nHey %s, Your Password is %s",name,pwd);
    printf("\n");
}
