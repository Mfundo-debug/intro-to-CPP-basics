#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float val[10] ={1,2,3,4,5,6,7,8,9,10};
    float sum=0.0, mean, variance =0.0,SD,sum2;
    int i;
    for(i=0; i<10; i++)
        sum+=val[i];
        sum2 += pow(val[10],2);
    mean=sum/10;
    for(i=0; i<10; i++)
        variance += pow(val[i]-mean,2);
    variance = variance/10;
    SD = sqrt(variance);
    cout<<"data values are:";
    for(i=0; i<10; i++)
        cout<<val[i]<<" "<<endl;
        cout<<"Standard deviation"<<SD<<endl;
        cout<<"Mean"<<mean<<endl;
        cout<<"sum of squares"<<sum2<<endl;


    return 0;
}
