#include <iostream>

using namespace std;

int main()
{   //initialize an array without specifying size of an arr
    double numbers[] ={7,5,6,12,35,27};
    double sum=0;
    double count=0;
    double average;
    cout<<"The numbers are: ";
    //print arr elements
    //use of range-based for loop
    for (const double &n : numbers){
        cout<<n<<" ";
        //calculate the sum
        sum +=n;
        //count the no. of arr elements
        ++count;
    }
    //print the sum
    cout<<"\nTheir Sum = "<<sum<<endl;
    //find the average
    average = sum/count;
    cout<<"Their Average ="<<average<<endl;
    return 0;
}
