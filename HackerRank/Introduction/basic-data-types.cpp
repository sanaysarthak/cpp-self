#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    
    int INTEGER;
    long int longINTEGER;
    char CHARACTER;
    float FLOAT;
    double DOUBLE;
    
    cin >> INTEGER >> longINTEGER >> CHARACTER >> FLOAT >> DOUBLE;
    
    printf("%d\n", INTEGER);
    printf("%li\n", longINTEGER);
    printf("%c\n", CHARACTER);
    printf("%.3f\n", FLOAT);
    printf("%.9lf\n", DOUBLE);
    
    return 0;
}
