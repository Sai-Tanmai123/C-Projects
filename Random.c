// Random Numbers
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
    int i;
    srand(time(0)); // change the value inside to get different random numbers
    for (i=1;i<=5;i++)
        printf("\n%d",(rand()%1000)+1); //Same random numbers due to some algorithm to get different - set the srand(time(0))
    printf("\n");
}
