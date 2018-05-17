#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outf("ITEMFILE.docx");
    cout <<endl <<"enter item name :";
    char name[100];
    cin >> name ;
    outf << name << endl;
    cout << endl << "enter item cost ";
    float cost;
    cin >> cost;
    outf<<cost<< endl;
    outf.close();

    ifstream inf ("ITEMFILE");
    inf>>name;
    inf >>cost;
    cout << endl<<endl;
    cout << "item name "<<name << endl << "Item cost" <<cost <<endl;
    inf.close();
}
