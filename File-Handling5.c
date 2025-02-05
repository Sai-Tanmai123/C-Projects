//File Handling 5
#include<stdio.h>
main()
{
    FILE *t;
    t=fopen("Biodata.txt","w");
    fputs("Hi, I am Appana Sai Tanmai\n",t);
    fputs("I am a Mechanical Engineer Graduate\n",t);
    fputs("Just Having an Interest in C Programming",t);
    fclose(t);
    printf("File Created and Written, Open Notepad and Check");
    printf("\n");
}


