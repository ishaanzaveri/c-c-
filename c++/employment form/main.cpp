#include <iostream>

using namespace std;
class employoment{
int age;
float height,weight;
char name [100];
public :
void input (){
cout << "enter your name " << endl;
cin >> name;
cout << " \n enter your age " << endl ;
cin >> age;
cout << "\n enter you weight " << endl;
cin >> weight;
cout << "\n enter your height " << endl;
cin >> height;
}
void output (){
cout << "your name is"<< name << " \nyou are "<< age <<"years old \nyou are  "<< height <<"cm tall and you weigh"<< weight << endl;
}

} ;

int main()
{
 int i;
employoment person[5];
for(i=0;i<=5;i++){
person[i].input();

}
for(i=0;i<=5;i++){
person[i].output();
}
}
