#include <stdio.h>
#include <stdlib.h>
void add(int a, int b){
int sumx;
sumx = a + b ;
printf ("the ans = %d", sumx);


}
void sub(int a, int b){
int sumx;
sumx = a - b ;
printf ("the ans = %d", sumx);


}void multiply(int a, int b){
int sumx;
sumx = a * b ;
printf ("the ans = %d", sumx);


}
void divide(int a, int b){
int sumx;
sumx = a / b ;
printf ("the ans = %d", sumx);

}
void mod(int a, int b){
int sumx;
sumx = a % b ;
printf ("the ans = %d", sumx);

}
int main()
{
    int w,a,b;

printf ("enter a number between 1-5\n1-add\n2-sub\n3-multiply\n4-divide\n5- modulus\n");
scanf ("%d",&w);
printf ("enter 2 numbers\a");
scanf ("%d %d",&a,&b);
switch(w){
case 1:
add ( a,  b);
break;
case 2:
sub (a,  b);
break;
case 3:
    multiply( a,  b);
    break;
case 4:
    divide(a,b);
    break;
case 5:
    mod (a, b);
    break;
default:
    printf ("eror");

}
}
