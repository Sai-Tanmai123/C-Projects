// Valid Mobile Number
#include <stdio.h>
main()
{
    long long int a=0,c=0;
    int i=0;
    printf("\nEnter Your Mobile No: ");
    scanf("%lli",&a);
    c=a;
    while (c!=0)
    {
        c=c/10;
        i++;
    }
    if (i==10)
        printf("Hey %lli is Valid",a);
    else
        printf("%lli is Not Valid :(",a);
    printf("\n");
}
