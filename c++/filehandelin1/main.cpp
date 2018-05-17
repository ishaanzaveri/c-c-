#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("country");
    fout <<"united states of america\n";
    fout << "united kingdom \n";
    fout <<"south korea\n";
    fout.close();
    fout.open("capital");
    fout <<"washington \n";
    fout<<"london\n";
    fout<<"seou\n";
    fout.close ();
    const int n = 80;
    char line [n];
    ifstream fin ;
    fin.open("country");
    cout << "contents of country file ";
    while (fin){
        fin.getline(line,n);
        cout <<endl<<line;
        }
        fin.close();
        fin.open("capital");
        cout << endl <<"contents of capital";
        while (fin){
            fin.getline(line,n);
            cout <<endl<<line;
        }
        fin.close();


    }
