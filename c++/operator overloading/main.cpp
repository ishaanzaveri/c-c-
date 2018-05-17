#include <iostream>

using namespace std;
class space {
int x,y,z;
public:
    void operator - (){
    x=-x;
    y=-y;
    z=-z;

        }
void getData(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}
void display(){
cout <<"\t"<<x<<endl<<"\t"<<y<<endl<<"\t"<<z<<endl;
}

};

int main()
{
space s;
s.getData(10,-20,20);
cout <<"s:";
s.display();
-s;
cout <<"s:";
s.display();
}
