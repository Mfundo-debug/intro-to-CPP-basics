#include <iostream>

using namespace std;
//Adds two numbers using a function

//declare a function
int add(int a, int b){
return(a+b);
}
int main()
{
    int sum;
    //call a function and store
    //the returned value in sum
    sum = add(12,3);
    cout<<"12 + 3 = "<<sum<<endl;
    return 0;
}
