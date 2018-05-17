#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
 int a, b,c,d ;
 char f;
 do {
printf("enter 2 numbers \n enter first number");
scanf ("%d",&a);
printf ("enter second number");
scanf ("%d",&b);
printf ("1 - add \n 2 - sub \n 3 - multiply \n 4 - divide \n 5 - modulus ");
scanf ("%d",&d);
switch (d){
case 1:
c = a + b;
printf("the ans is %d \n", c);
break ;

case 2:
c = a - b;
printf("the ans is %d \n", c);
break ;

case 3:
c = a * b;
printf("the ans is %d \n", c);
break ;

case 4:
c = a / b;
printf("the ans is %d \n", c);
break ;

case 5:
c = a % b;
printf("the ans is %d \n", c);
break ;

default:
    printf("EROR not found \n");

}
fflush(stdin);
printf ("do you wanna replay (y/n)");
scanf ("%c",&f);

 } while (f == 'y' || f == 'Y');
}
