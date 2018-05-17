#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,y,z,i;
printf("enter the number of which table you want \n enter first number");
scanf ("%d",&x);
printf("enter the number of times you want");
scanf ("%d",&y);
for (i = 1;i <=y ;i++){
z = x * i;
printf ("%d x %d = %d \n",x ,i,z);

}
}
