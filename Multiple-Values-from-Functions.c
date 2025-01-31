//Function returning Multiple values
#include <stdio.h>
main()
{
 float *calctotavg(int,int,int);
 float *res;

 res=calctotavg(98,99,100);

 printf("\nTotal is:%f",*(res+0));
 printf("\nAverage is:%f",*(res+1));
 printf("\nPercentage is:%.0f%%",*(res+2));

 printf("\n");
}

float *calctotavg(int m,int p,int c)
{
	float *res;
	res=(float *)malloc(sizeof(float)*3);
	float tot=m+p+c;
	*(res+0)=tot;
	*(res+1)=tot/3.0;
	*(res+2)=(tot/3.0);

	return res;
}
