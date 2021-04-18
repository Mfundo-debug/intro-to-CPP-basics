#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    char again = 'Y';
    while (again== 'y' || again =='Y'){
        //Get age
        cout<<"How old are you?"<<endl;
        cin>>age;
        if (age == 18)
            cout<<"Congrats, you are allowed to vote!"<<endl;
        else if (age <18)
            cout<<"NOpe! you are too young to vote!"<<endl;
        else
            cout<<"Get the vote out"<<endl;
            cout<<"Go again ?(y/n)";
            cin>>again;
            // change control variable
    }// end while loop
    cout<<"the end!!!!!"<<endl;
    return 0;
}
