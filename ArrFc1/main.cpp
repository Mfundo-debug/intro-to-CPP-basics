#include <iostream>

using namespace std;
// program to display marks of 5 students
//declare function to display marks
//take 1D as a parameter
void display(int m[5]){
cout<<"displaying marks: "<<endl;
//display array elements
for (int i=0;  i<5; ++i){
    cout<<"Student"<<i+1<<": "<<m[i]<<endl;
}
}
int main()
{
    //declare and initialize an array
    int marks[5] = {88,78,90,61,66};
    // call display function
    //pass array as argument
    display(marks);
    return 0;
}
