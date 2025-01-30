// Pre Defined Macros
#include<stdio.h>
main()
{
    printf("\nDate is %s",__DATE__);
    printf("\nTime is %s",__TIME__); // %s in HH:MM:SS format
    printf("\nFile is %s",__FILE__);
    printf("\nLine Number is %d",__LINE__);
    printf("\nCode Version as per ANSI Standard is %d",__STDC__);
    printf("\n");
}
