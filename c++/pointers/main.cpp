#include <iostream>

using namespace std;
class A{
    public :
 virtual void getter(){
cout <<"i am calling to pieces"<< endl;
}

};
class B : public A{
public:
    void getter(){
    cout <<"i am awesome "<< endl;

    }
};


int main()
{
    A a1;
    B b1;
    A *P;
    P =&b1;
    P ->getter();
    P =&a1;
    P ->getter ();
}
