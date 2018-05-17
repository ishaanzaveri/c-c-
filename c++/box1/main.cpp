#include <iostream>
using namespace std;
class box {
int lenth,breatdh,height,answer;
public :
    box(int a,int b){
    lenth=a;
breatdh=b;
height=0;
    }
    box(int a,int b,int c){
    lenth=a;
breatdh=b;
height=c;
    }
void cal(){
answer = lenth*breatdh*height;
cout << "the ans is "<< answer;
}
};


int main()
{
    int a,b,c;
    cout << "enter the lenth breadht and height" << endl;
    cin >> a>>b>>c;
    box b1(a,b,c);
    box b2(a,b);
    b1.cal();
    b2.cal();
}
