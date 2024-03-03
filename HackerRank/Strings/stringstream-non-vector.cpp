#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string input;
    cin >> input;
    for(int i=0; i<input.length(); i++)
    {
        if(input[i] == ',') 
        {
            cout << endl;
            continue;
        }
        cout << input[i];    
    }
    return 0;
}
