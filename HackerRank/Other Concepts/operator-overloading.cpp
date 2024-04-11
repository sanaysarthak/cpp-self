// Not solved using Operator Overloading

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class matrix {
    private:
        int row, col;
        
    public:
        void set_data() {
            cin >> row >> col;
            int a[row][col]; 
            int b[row][col];
            for(int i=0; i<row; i++) {
                for(int j=0; j<col; j++) {
                    cin >> a[i][j];
                }
            }
            for(int i=0; i<row; i++) {
                for(int j=0; j<col; j++) {
                    cin >> b[i][j];
                }
            }
            for(int i=0; i<row; i++) {
                for(int j=0; j<col; j++) {
                    cout << a[i][j] + b[i][j] << " ";
                }
                cout << endl;
            }
        }
            
        ~matrix() {} // destructor
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t_cases;
    cin >> t_cases;
    for(int i=1; i<=t_cases; i++) {
        matrix obj1;
        obj1.set_data();

    }  
    return 0;
}
