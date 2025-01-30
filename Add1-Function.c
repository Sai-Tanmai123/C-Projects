// Add 1 to the Variable
#include<stdio.h>
main()
{
    void val(int);
    int a=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    val(a);
    printf("New Value is %d",a);
    printf("\n");
}
void val(int a)
{
    a++;
}
// Not Possible since we are using call by value to modify, so not possible
