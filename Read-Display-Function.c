//Read and Display
#include<stdio.h>
main()
{
    void disp(int,int,int);
    int a=0,b=0,c=0;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    disp(a,b,c);
    printf("%d\n%d\n%d",a,b,c); // void function did nothing here
    printf("\n");
}
void disp(int a,int b,int c)
{
    if (a!=0)
        return(a);
    else
        if (b!=0)
            return(b);
        else
            return(c);
}

