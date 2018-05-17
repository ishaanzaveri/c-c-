#include <iostream>

using namespace std;
class CopyConstructor{
int a;
public :
CopyConstructor(int p){
a = p;
}
CopyConstructor( CopyConstructor & c){
a = c.a ;
}
void printA(){
cout << a << endl;
}
};

int main()
{
    CopyConstructor b1(10);
    CopyConstructor b2 (b1);
    b1.printA();
    b2.printA();

}
