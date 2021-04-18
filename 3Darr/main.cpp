#include <iostream>

using namespace std;
//Program that stores a value entered by a user in 3D arr
int main()
{   //this arr can store up to 12 elements(2*3*2=12)
    int test[2][3][2] = {{ {1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};
    //Display the values with proper index
    for (int i=0; i<2; ++i){
        for(int j=0; j<3; ++j){
            for (int k=0; k<2; ++k){
                cout<<"test["<<i<<"]["<<j<<"]["<<k<<"]= "<<test[i][j][k]<<endl;
            }
        }
    }

    return 0;
}
