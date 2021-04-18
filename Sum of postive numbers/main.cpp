#include <iostream>

using namespace std;
//program to find the sum of positive numbers
// if the user enters a negative number,the loop ends
int main()
{       char Y,N;
    int number;
    int sum =0;
    //user will enter his/her inputs
    cout<<"Enter a number:";
    cin>>number;
    cout<<"do you want to continue"<<endl;
    cin>>Y;
    cin>>N;
    while (number >=0){
        //add all positivre numbers
        sum += number;
        //takes input again if the number is positive
        cout<<"Enter a number:";
        cin>>number;

    }
    cout<<"do you want to continue"<<endl;
    cin>>Y;
    cin>>N;
    cout<<"\n The sum is"<<sum<<endl;

    return 0;
}
