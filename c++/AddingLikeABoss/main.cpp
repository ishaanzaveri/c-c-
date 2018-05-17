#include <iostream>

using namespace std;
class AddingLikeABoss{
int a,b,ans;
public :
    void BossClass(int *m,int *v ){
a = *m;
b = *v;
ans = a + b;
cout << "the ans is "<< ans << endl;
}
};
int main()
{
    int a,b;
    cout << "enter 2 numbers " << endl;
    cin >>a;
    cout<< "enter second number" << endl;
    cin >> b; 
    AddingLikeABoss boss1;
    boss1.BossClass(&a,&b);
}
