#include <iostream>

using namespace std;

int main()
{
   int Arr[6],n,i,small,large;
   cout<<"enter number of elements"<<endl;
   cin>>n;
   for(int i=0; i<n; i++){
    cout<<"enter element"<<i+1<<":";
    cin>>Arr[i];
   }
   small = Arr[0];
   large = Arr[0];
   for( int i=1; i<n; i++){
    if (Arr[i]<small)
        small = Arr[i];
    if (Arr[i]>large)
        large = Arr[i];
   }

   cout<<"n\Largest element is:"<<large<<endl;
   cout<<"n\Smalles element is:"<<small<<endl;
    return 0;
}
