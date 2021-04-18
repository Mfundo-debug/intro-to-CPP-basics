#include <iostream>

using namespace std;
//that displays all elements of an initialised 2D arr
int main()
{
    int test[3][2] = { {2,-5},{4,0},{9,1}};
    // use nested for loop
    //access rows of the array
    for(int i=0; i<3; ++i){
        //access columns of the array
        for (int j=0; j<2; ++j){
            cout<<"test["<<i<<"]["<<j<<"]="<<test[i][j]<<endl;
        }
    }
    return 0;
}
