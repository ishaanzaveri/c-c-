#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0 ,v,b=1,c=1;
    printf("the fibonacci series\n %d %d ",a,b );
    for (c = 1;c <=10;c++){
        v = b;
        b = a + b;
        a = v;
        printf ("%d ",b);





    }

}
