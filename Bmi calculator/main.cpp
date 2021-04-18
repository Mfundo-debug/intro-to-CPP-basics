#include <iostream>

using namespace std;

int main()
{
   long double mass;
   long double height;
   long double bmi;
   cin>>mass;
   cin>>height;
   bmi = mass/(height*height);

  if (bmi<=25){
    if (bmi>=18.5){
        cout<<"Your body mass index is:"<<bmi<<endl;
        cout<<"you are normal";
    }
    else{
        cout <<"your body mass index is:"<<bmi<<endl;
        cout<<"you are underweight"<<endl;
    }
  }
  else {
    if (bmi<=30){
        cout<<"your body mass index is:"<<bmi<<endl;
        cout<<"You are overweight"<<endl;
    }
    else {
        cout<<"your body mass index is:"<<bmi<<endl;
        cout<<"you are obese"<<endl;
    }
  }

    return 0;
}
