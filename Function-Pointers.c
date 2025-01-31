//Function Pointers
#include<stdio.h>
void main()
{
    void display();
    void (*p)(); // Since function is void so pointer is also void and *p() tells the compiler that this is function pointer
    p=display;
    p();// function call using function pointer
    printf("\n");
}
void display()
{
    printf("Hiiii");
}

