#include <iostream>

using namespace std;

int main()
{
    int a[]= {65,7,89,44,34};
    int smallest,largest;
    smallest = a[0];
    largest = a[0];
    int i;
    cout<<"Enter 5 digits"<<endl;
    for (i=0; i<5; i++){
            cin>>a[i];
        if (a[i]>largest){
            largest = a[i];
        }
        if (a[i]<smallest){
            smallest = a[i];
        }
    }

    cout<<"large: "<<largest<<endl;
    cout<<"smallest: "<<smallest<<endl;
    return 0;
}
