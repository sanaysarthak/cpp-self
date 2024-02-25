#include <iostream>
using namespace std;

class Print {
    int x;
    public:
        Print(int _x) : x(_x) { }
        int fun() { return x; }
};

class RePrint : public Print {
    int y;
    public:
        RePrint(int _x, int _y) : y(_y), Print(_x) { } // Output will be 23 only in this case
        void fun() { cout << Print::fun() << y; }
};

int main() {
    RePrint *b2 = new RePrint(2, 3);
    b2 -> fun();
    return 0;
}
