#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[100] ;
    char b[100];
    cout <<"enter your last and first name  ";
    cin >> a >> b;
    strcat (a,b);
    cout << a;
}

