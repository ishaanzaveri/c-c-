#include <stdio.h>
#include <stdlib.h>

 void spaw(int *c,int *s){
 int *temp;
 temp=c;
 c=s;
 s=temp;
 printf("The values are a:%d and b:%d",*c,*s);

 }
int main()
{
    int a,b;
    printf("Enter 2 nos.\n");
    scanf("%d%d",&a,&b);
 spaw(&a,&b);
}
