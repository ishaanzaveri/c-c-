#include <iostream>

using namespace std;

int main()
{
    cout << "add-1 \n sub - 2 \n multiply -3 \n divide - 4" << endl;
    int a,c,d,f;
    cin >> a;
    cout << "enter 1st number";
    cin >> c;
    cout << " enter second number";
    cin >> d;
    switch (a){
case 1:
 f =  c + d;
 cout << f << endl;
 break;

 case 2:
 f = c - d;
 cout << f << endl;
 break;

 case 3:
 f = c * d;
 cout << f << endl;
 break;

 case 4:
 f = c / d;
 cout << f << endl;
 break;

 case 5:
 f = d % c;
 cout << f << endl;
 break;
 default:
cout <<"eror 202" << endl;




    }

return 0;
}
