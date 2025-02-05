//Structures using Functions
#include<stdio.h>
struct book
{
    int id;
    char name[50];
    int price;
    char author[100];
}b1,b2;
typedef struct book Hi; // So shortcut for struct book is Hi
void main()
{
    Hi input(void);
    void display(Hi);
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
Hi input (void)
{
    Hi b;
    printf("Enter Book Id: ");
    scanf("%d",&b.id);
    printf("Enter Book Title: ");
    fflush(stdin);
    gets(b.name);
    printf("Enter Book Price: ");
    scanf("%d",&b.price);
    printf("Enter Book Author: ");
    fflush(stdin);
    gets(b.author);
    printf("\n");
    return b;
}
void display(Hi b)
{
    printf("\nBook Id - %d",b.id);
    printf("\nBook Title - %s",b.name);
    printf("\nBook Price - %d",b.price);
    printf("\nAuthor of the Book - %s",b.author);
    printf("\n~~~~~~~~~~~~~~~~~~~");
}
