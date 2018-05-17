#include <iostream>

using namespace std;


class student {
    int roll,marks;
    public:
void get(){
cout <<"enter your roll no. "<< endl;
cin >> roll;
cout << "enter your marks " << endl;
cin >> marks;
 }
void show(){
cout << "your roll no is " << roll <<"your marks are " << marks <<endl;
}



};

int main()
{
    student si;
    si.get();
    si.show();
}
