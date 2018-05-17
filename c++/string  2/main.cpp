#include <iostream>
#include <string.h>
using namespace std;

int main()
{
 char  s1[100];
 char s2[100];
 int a;
 cout <<"enter a word"<<endl;
cin >>s1;
strcpy(s2,s1);
strrev(s2);
a = strcmp(s1,s2);
if (a==0){

    cout <<"your word is palidrom";

}
else {

    cout <<"your word is not palidrom";
}


}
