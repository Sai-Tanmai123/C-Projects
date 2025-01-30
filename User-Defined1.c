// User Defined 1
#include<stdio.h>
main()
{
    void hello(void); // Function Declaration
    printf("\nIn Main Function");
    hello(); // Function Calling/ Invocation/Execution
    printf("\nBack to Main Function Again");
    hello();
    printf("\nBack to Main Function Again");
    printf("\n");
}
void hello(void) // Function Definition or Called Function
{
    printf("\nHi I am in Hello Function");
    return;
}

