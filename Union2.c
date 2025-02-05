//Union
#include<stdio.h>
#pragma pack(1)
union abc
{
    int aadhar;
    char pass[20];
    char pan[20]
}info;
main()
{
    int a;
    printf("\n1.Aadhar");
    printf("\n2.Passport");
    printf("\n3.Pan");
    printf("\nEnter your Option (1/2/3):  ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:{
                        printf("Enter ur Aadhar Number: ");
                        scanf("%d",&info.aadhar);
                    }break;
        case 2:{
                        printf("Enter ur Passport Number: ");
                        fflush(stdin);
                        gets(info.pass);
                    }break;
        case 3:{
                        printf("Enter ur Pan Number: ");
                        fflush(stdin);
                        gets(info.pan);
                    }break;
        default:printf("Wrong Option....");break;
    }
    switch(a)
    {
        case 1:printf("Aadhar Number is Verified");break;
        case 2:printf("Passport Number is Verified");break;
        case 3:printf("Pan Number is Verified");break;
        default: exit(0);
    }

    printf("\n");
}


