#include <iostream>
#include <cmath>
using namespace std;
float CalculateSD(float data[]);
int main()
{
    int i;
    float data[10];
    cout<<"enter 10 elements";
    for (int  i=0; i<10; ++i)
        cin>>data[i];
    cout<<endl<<"standard deviation = "<<CalculateSD(data);
    return 0;
}

float CalculateSD(float data[]){
float sum=0.0, mean, standardDeviation =0.0;
int i;
for( int i=0; i<10; ++i){
    sum +=data[i];
}
mean =sum/10;
for (int i=0; i<10; ++i)
    standardDeviation += pow(data[i]- mean,2);
return sqrt(standardDeviation/10);
}
