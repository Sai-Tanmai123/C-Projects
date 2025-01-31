//Function Pointer
#include<stdio.h>
main()
{
    void add(int,int);
    void sub(int,int);
    void mul(int,int);
    void div(int,int);
    void (*p)(int,int);
    int a,b;
    char ch;
    printf("Enter 2 Nos: ");
    scanf("%d%d",&a,&b);
    printf("Enter ur Option (+ or - or * or /): ");
    fflush(stdin);
    ch=getchar();
    if (ch=='+')
        p=add;
    else
        if (ch=='-')
            p=sub;
        else
            if (ch=='*')
                p=mul;
            else
                if (ch=='/')
                    p=div;
            else
            {
                printf("Invalid Option....");
                exit(0);
            }
    p(a,b); // Function Call
    printf("\n");
}
void add(int x, int y)
{
    printf("Addition is %d",(x+y));
}
void sub(int x, int y)
{
    printf("Difference is %d",(x-y));
}
void mul(int x, int y)
{
    printf("Product is %d",(x*y));
}
void div(int x, int y)
{
    printf("Quotient is %d",(x/y));
    printf("\nRemaider is %d",(x%y));
}
