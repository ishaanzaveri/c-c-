#include <stdio.h>
#include <stdlib.h>
struct student {
int roll;
float marks;
char name[20];
};

int main()
{
    struct student s[10];
    int i;
   for (i=0;i<10;i++){
printf ("enter roll no.");
scanf ("%d",&s.roll[i]);
fflush(stdin);
printf("enter name");
gets(s.name[i]);
printf("enter your marks");
scanf("%f",&s.marks[i]);
}
return 0;
}
