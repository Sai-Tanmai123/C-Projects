//Structures using Functions
#include<stdio.h>
struct book
{
    int id;
    char name[50];
    int price;
}b1,b2;
void main()
{
    struct book input(void);
    void display(struct book);
    printf("Reading Book Info\n");
    printf("``````` ```` ````\n");
    b1=input();
    b2=input();
    printf("\nBook Information");
    printf("\n```` ``````````\n");
    display(b1);
    display(b2);
    printf("\n");
}
struct book input (void)
{
    struct book b;
    printf("Enter Book Id: ");
    scanf("%d",&b.id);
    printf("Enter Book Title: ");
    fflush(stdin);
    gets(b.name);
    printf("Enter Book Price: ");
    scanf("%d",&b.price);
    printf("\n");
    return b;
}
void display(struct book b)
{
    printf("\nBook Id - %d",b.id);
    printf("\nBook Title - %s",b.name);
    printf("\nBook Price - %d",b.price);
    printf("\n~~~~~~~~~~~~~~~~~~~");
}
