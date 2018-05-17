#include <iostream>

using namespace std;
class abe{
int a,b;
public :
abe(int p, int q  ) {
a = p;
b = q;
}
void show () {
cout << a << b;
}
};
int main()
{
    int a,b;
    cout << "enter 2 numbers "<< endl;
    cin >> a >> b;
    abe a1 (a,b);
    a1.show();



}
