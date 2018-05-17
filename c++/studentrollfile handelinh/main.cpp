#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[100];
    int roll;
    int marks;
    ofstream outf ("ThisFileIsAwesome.txt");
    cout<<endl<<"enter your name :";
    cin >> name;
    outf << name <<endl;
    cout <<"enter your roll ";
    cin >>roll;
    outf << roll<<endl;
    cout <<"enter your marks";
    cin >>marks;
    outf<<marks<<endl;
    outf.close();

    ifstream inf ("ThisFileIsAwesome.txt");
    inf >> name;
    cout << "name:"<< name <<endl;
    inf >> roll;
    cout <<"roll no.:"<< roll<<endl;
    inf >> marks;
    cout <<"marks"<<marks;
    inf.close();


}
