#include <iostream>

using namespace std;
//C++ program to find the sum of first n natural numbers
int main()
{
    int num,sum;
    sum =0;
    cout<<"Enter a positive integer";
    cin>>num;
    for (int count =1; count<=num; ++count){
        sum += count;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}
