//Enumurators
#include<stdio.h>
enum month{Jan=5,Feb=6,Mar=7,Apr=8,May=9,June=3,July=4,Aug=1,Sept=2,Oct=10,Nov=15,Dec=20};
main()
{
    enum month dis;
    int per;
    dis=Jan;
    per=dis;
    printf("Discount is %d %%",dis);
    printf("\n");
}


