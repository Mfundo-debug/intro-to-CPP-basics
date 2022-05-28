#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Number[10], Sum=0,Dev,Sqaure = 0;
    float Mean,StaDev;
    cout << "Enter 10 numbers:" << endl;
    for (int i=0; i<10; ++i)
    {
        cin>> Number[i];
    }

    for (int i=0; i<10; ++i)
    {
        Sum += Number[i];
        Mean = Sum/10;
    }
    cout << endl;
    cout << "Mean: "<< Mean<< endl;
    cout<< "Population size: 10" << endl;

    for (int i=0; i<10; ++i)
    {
        cout<< Number[i]<< " ";
    }
     cout<< " :Population Members" << endl;

    for (int i=0; i<10; ++i)
    {
        Dev = Number[i] - Mean;
        cout << Dev << " ";
    }
     cout<< " :Deviations " << endl;

  for (int i = 0; i < 10; ++i)
        {
         Sqaure += pow(Dev,2);
        }
        cout << "Sum square: " << Sqaure<< endl;

    StaDev = sqrt(Sqaure/10);
    cout << "Standard deviation: " << StaDev << endl;
    return 0;
}
