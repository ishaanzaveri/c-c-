#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    int len;
    char str[80];
    cout << "Enter a string" << endl;
     cin >> str;

      len=strlen(str);
      cout << len;

     fstream file;
     file.open("TEXT.txt",ios::out|ios::in);
     for (int i=0;i<len;i++)
        file.put(str[i]);

     file.seekg(0);
     char ch;
     while(file){
        file.get(ch);
        cout <<ch;
     }

}
