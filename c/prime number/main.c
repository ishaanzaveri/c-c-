#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b=0,i;
printf("enter number which you want to cheack if it is prime or not");
scanf("%d",&a);

for (i = 2;i < a;i++){
 if (a % i == 0){

    b=1;
}
}

if(b==0)
    printf ("Its a prime no");
else
    printf("Its not prime no");
}
