//File Handling 7
#include<stdio.h>
main()
{
    FILE *app;
    int rno;
    char name[30];
    float avg;
    app=fopen("Student.txt","w+"); // If we use a+ then all the data will be stored
    printf("Enter Roll No: ");
    scanf("%d",&rno);
    printf("Enter Your Name: ");
    scanf("%s",&name);
    printf("Enter Avg Marks: ");
    scanf("%f",&avg);

    fprintf(app,"Name:%s",name); // Do not give spaces, if gave spaces it sends the data to the next line
    fprintf(app,"\nRoll-No:%d",rno);
    fprintf(app,"\nAvg:%.2f%%",avg);
    printf("\nStudent Data is Written to the File");
    rewind(app); // To get the cursor (file Pointer) back to Starting - if doesn't work then we can write open and close  code
    char b[200];
    while((fscanf(app,"%s",&b))!=EOF)
    {
        printf("\n%s",b);
    }
}


