#include <iostream>

using namespace std;
//program to assign data to members of a structure variable and display it
struct Person{
char name[25];
int age;
float salary;
};
int main()
{ Person p1;
cout<<"enter full name: ";
cin.get(p1.name, 25);
cout<<"Enter age: ";
cin>>p1.age;
cout<<"enter salary: ";
cin>>p1.salary;

cout<<"\nDisplay information."<<endl;
cout<<"Name: "<<p1.name<<endl;
cout<<"Age: "<<p1.age<<endl;
cout<<"salary: "<<p1.salary;

    return 0;
}
