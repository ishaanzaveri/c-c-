#include <iostream>

using namespace std;

class employoment{
int age;
float height,weight;
char name [100];
public :
    int sal;
void input (){
cout << "enter your name " << endl;
cin >> name;
cout << " enter your age " << endl ;
cin >> age;
cout << " enter you weight " << endl;
cin >> weight;
cout << "enter your height " << endl;
cin >> height;
cout <<"enter salary " << endl;
cin >> sal;
}
void output (){
cout << "your name is"<< name << " \nyou are "<< age <<"years old \nyou are  "<< height <<"cm tall and you weigh"<< weight << endl;
}

} ;

int main()
{
 int c;
 cout << "enter the number of people there are to fill the form";
 cin >> c;
 int  i,a,b[c],d;
employoment person[c];
for(i=0;i<c;i++){
person[i].input();

}
for(i=0;i<c;i++){
person[i].output();
}
for (i=0;i < c;i++){

    b[i] = person[i].sal;


}
a=0;
for(i=0;i<c;i++)
a=a+b[i];
d = a / c;

cout << "the average salary is " << d;

}
