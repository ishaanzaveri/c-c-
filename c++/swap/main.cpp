#include <iostream>

using namespace std;
class yay{
    int l,m,o;
    public:


void swapingLikeABoss(int *a,int *b){
    l=*a;
    m=*b;
o=l;
l=m;
m=o;
cout <<l<<m;
}
};
int main()
{
  int a,b;
  cout <<"enter 2 numbers"<<endl;
  cin >>a>>b;
  yay y1;
  y1.swapingLikeABoss(&a,&b);

}
