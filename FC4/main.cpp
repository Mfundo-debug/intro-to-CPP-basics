#include <iostream>

using namespace std;
//using function definition after main() function
//function prototype
int add (int, int);
int main()
{   int sum;
    //calling the function and storing
    //return value in sum
    sum = add(100,78);
    cout<<"100 + 78 = "<<sum<<endl;
    return 0;
}
//function definition
int add (int a, int b){
    return(a+b);
}