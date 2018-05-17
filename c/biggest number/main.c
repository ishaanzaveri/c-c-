#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar [10],i,g;
    for (i=0;i<10;i++){
    printf("enter a number\n");
    scanf("%d",& ar [i]);
}
g=ar[0];
for (i=1;i<10;i++){


    if (g < ar[i]){

        g = ar[i];
    }
}
printf ("the greatest number is %d",g);
}
