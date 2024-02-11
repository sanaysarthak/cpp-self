#include <iostream>
using namespace std;

class Check {
    int x1 = 1;
    public:
        int x2 = 2;
        int get_x1() { return x1; }
        int get_x2() { return x2; }
};

int main() {
    Check t;
    int a, b;
    // a = t.x1; 
    // Error on the line above, as it is accessing a private variable
    b = t.x2;
    a = t.get_x1();
    b = t.get_x2();
    return 0;
}
