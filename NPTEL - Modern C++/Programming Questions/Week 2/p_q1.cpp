#include <iostream>

using namespace std;

#define THRICE(X) (n+1) * (n+1)//LINE-1
int main(){
    int n;
    cin >> n;
    cout << THRICE(n+1);
    return 0;
}
