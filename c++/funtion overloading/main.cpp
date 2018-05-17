#include <iostream>

using namespace std;
class LetsWorkFast{
 int a ;
 int l;
 int  c;
    public :
void manly(int q){
     a = q;
    cout <<a;
}
void  manly(int n, int q ){
     l = n;
     a = q;
    cout << a<<l<<endl;

}
void manly(int q ,int n ,int t){
     a = q;
     l=n;
     c=t;
    cout <<a<<l<<c<<endl;
}
};

int main()
{
    LetsWorkFast a1;
    LetsWorkFast a2;
    LetsWorkFast a3;
    a1.manly(10);
    a3.manly(10,2,16);
    a2.manly(10,10);

}
