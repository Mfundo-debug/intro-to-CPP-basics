#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[] = {2,4,6,8,12,5,9,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr, arr+n);
   cout<<"\n Array after sorting";
   for (int i =0; i<n; ++i)
    cout<<arr[i]<<" ";
    return 0;
}
