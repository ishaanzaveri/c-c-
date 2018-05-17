#include <iostream>

using namespace std;
class air{
int a,b,c,d;
public :
    void operator >(){
    air n;
    d=a+b+c
    n.d=n.a+n.b+n.c;
    }
   void GetData(int x,int y,int z){
   a=x;
   b=y;
   c=z;
   }
   void hiData(){

   cout <<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;

   }
};
int main()
{
air a,a1;
a.GetData(-10,20,-30);
a1.GetData(50,20,1);
a.hiData();
if (a1<a){
    a1.hiData();

}
    else{
        a.hiData();
    }
}
