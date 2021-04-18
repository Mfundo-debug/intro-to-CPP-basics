#include <iostream>

using namespace std;
long square_nums(int n){
long sum=0;
for(int i=1; i<=5; ++i){
    sum +=i*i;
}
return sum;
}
int main()
{
    int n;
    cout<<"Enter numbers: ";
    cin>>n;
    cout<<"Results is:"<<square_nums(n);
    return 0;
}
