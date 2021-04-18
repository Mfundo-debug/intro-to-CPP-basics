#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n=10;
     float sum = 0.0, mean, stdDeviation, SumOfSquares=0, Deviations;
    float val[10];
    cout<< "Enter 10 population members "<<endl;
    for(i=0; i<10; ++i)
    {
        cin>>val[i];
    }

    cout<< "population size "<<n<<endl;
    for(i=0; i<n; ++i)
    {
        sum = sum + val[i];
        mean = sum/10;

    }
    cout<< "mean :"<<mean<<endl;


    cout<< "The population members are :";

    for(i=0; i<n; ++i)
    {
        cout<< "  "<<val[i]<< " ";
    }

    cout<< "The value for the deviations are :";
    for(i=0; i<10; ++i)
    {
       Deviations = val[i]- mean;
       cout<<"Deviation: "<<Deviations<<endl;
    }
    for(i=0; i<10; ++i)
    {
       SumOfSquares += pow(Deviations,2);

    }
    cout<< "Sum of squares="<<SumOfSquares<<endl;

    stdDeviation = sqrt(SumOfSquares/10);
    cout<<"Standard deviation:"<<stdDeviation<<endl;




}

