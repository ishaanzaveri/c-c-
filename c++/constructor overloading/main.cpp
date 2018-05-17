#include <iostream>

using namespace std;
class ConstructorOverloader{
    int a,b,c;
    public :
ConstructorOverloader(int n ){
 a = n;
 b=0;
 c=0;
}
ConstructorOverloader(int f,int  t ){
 a = f;
 b = t;
 c = 0;
}
ConstructorOverloader(int k,int l, int w  ){
 a = k;
 b = l;
 c = w;
}
void tellValue(){
cout << a << b << c <<endl;
}

};
int main()
{
    ConstructorOverloader a1(12);
    ConstructorOverloader a2(12, 13 );
    ConstructorOverloader a3(12, 3, 5 );
    a1.tellValue();
    a2.tellValue();
    a3.tellValue();


}
