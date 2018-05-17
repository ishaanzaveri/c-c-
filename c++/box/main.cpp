#include <iostream>

using namespace std;


class box{
int a,b,c,d;
public:
box(){
a=10;b=10;c=10;
}
void volume (){
d=a*b*c;
cout << d;
}
};
int main()
{
box vol;
box n;
vol.volume();
n.volume();
}

