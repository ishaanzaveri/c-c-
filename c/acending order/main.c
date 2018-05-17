#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a [10],b,i,n;
    for (i = 0;i < 10; i++){
    printf("enter a number\n");
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
for(b=i+1;b<10;b++){
if (a[i]>a[b]){
    n = a [i];
    a[i] = a[b];
    a[b] = n;

}


}


}
for (i=0;i<10;i++){
printf("%d \t",a[i]);
}
}
