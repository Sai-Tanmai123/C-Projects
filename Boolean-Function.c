//Boolean Function
#include<stdio.h>
typedef enum boolean
{
    false,
    true
}boolean;
typedef enum boolean boolean;
main()
{
    boolean res;
    boolean oddeven(int);
    int no;
    printf("Enter a No: ");
    scanf("%d",&no);
    res=oddeven(no);
    if (res==true)
    {
        printf("%d is Even",no);
    }
    else
        printf("%d is Odd",no);
}

boolean oddeven(int x)
{
    if (x%2==0)
        return true;
    else
        return false;
}

