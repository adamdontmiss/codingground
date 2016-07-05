#include <iostream>

using namespace std;

int main()
{
    const int DIM = 10;
    
    int cube[DIM - 1][DIM - 1]; 
   
    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            if (i == 0 || j == 0) {
                cube[i][j] = 1;
            } else {
                cube[i][j] = cube[i-1][j] + cube[i][j-1];
            }
        }
    }
    
    cout << "The answer is: " << cube[DIM-1][DIM-1] << endl;
    
    return 0;
}

