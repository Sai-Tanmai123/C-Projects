//Structures and Unions
#include<stdio.h>
#pragma pack(1)
struct marks
{
    int rno;
    char name[20];
    int m;
    union
    {
        struct
        {
            int p,c;
        }mpc;
        struct
        {
            int e,co;
        }mec;
    };
}a,b;
main()
{
    int key,tot=0,i;
    float avg=0;
    printf("Enter ur Name: ");
    fflush(stdin);
    gets(a.name);
    printf("Enter ur Roll No: ");
    scanf("%d",&a.rno);
    printf("Which Stream You are: ");
    printf("\n1.Science");
    printf("\n2.Commerce");
    printf("\nPress 1 for Science and 2 for Commerce: ");
    scanf("%d",&key);
    if (key==1)
    {
        printf("Enter Maths Marks: ");
        scanf("%d",&a.m);
        printf("Enter Physics Marks: ");
        scanf("%d",&a.mpc.p);
        printf("Enter Chemistry Marks: ");
        scanf("%d",&a.mpc.c);
        tot=(a.m)+(a.mpc.p)+(a.mpc.c);
        avg=tot/3.0;
        printf("Total Marks: %d",tot);
        printf("\nAverage is %.2f%%",avg);
    }
    else
        {
            if (key==2)
            {
                printf("Enter Maths Marks: ");
                scanf("%d",&a.m);
                printf("Enter Economics Marks: ");
                scanf("%d",&a.mec.e);
                printf("Enter Commerce Marks: ");
                scanf("%d",&a.mec.co);
                tot=(a.m)+(a.mec.e)+(a.mec.co);
                avg=tot/3.0;
                printf("Total Marks: %d",tot);
                printf("\nAverage is %.2f%%",avg);
            }
            else
                exit(0);
        }

    printf("\n");
}


