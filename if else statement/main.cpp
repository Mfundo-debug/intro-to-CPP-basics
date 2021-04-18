#include <iostream>

using namespace std;
//program to print positive number by user
// if the user enters a negative number, it is skipped
int main()
{
    int number;
    cout<< "enter an integer: ";
    cin>>number;
    //checks if the number is positive
    if (number>0){
        cout<<"you entered a positive integer:"<<number<<endl;
    }
    cout<<"this statement is always executed";
    return 0;
}
