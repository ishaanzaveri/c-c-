#include <iostream>

using namespace std;
static int a;//a=0
class findObjects{
public:
findObjects (){
a++;
}
void ij(){
cout << a;//print a
}
};

int main()
{
    int  i,b;
    cin >> b;
for (i=0;i=<b;i++){
    findObjects a[i];

}

a[i].ij();

    return 0;
}
