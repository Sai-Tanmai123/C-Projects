//Marks of 3 and Tot and Avg
#include<stdio.h>
main()
{
    int tot(int,int,int);
    float avg(int,int,int);
    int a=0,b=0,c=0;
    puts("Enter Marks of 3 Subjects");
    scanf("%d%d%d",&a,&b,&c);
    printf("Total is %d",tot(a,b,c));
    printf("\nAverage is %.2f%%",avg(a,b,c));
    printf("\n");
}
int tot(int x,int y,int z)
{
    int w;
    w=x+y+z;
    return(w);
}
float avg(int x,int y,int z)
{
    float w;
    w=(x+y+z)/3.0;
    return(w);
}
