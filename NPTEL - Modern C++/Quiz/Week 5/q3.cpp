// Output : 1 2 1 2 3 -3 -2-1 -2-1

#include <iostream>
using namespace std;

class One {
    public:
        One() { cout << "1 "; }
        ~One() { cout << "-1 "; }
};

class Two : public One {
    public:
        Two() { cout << "2 "; }
        ~Two() { cout << "-2"; }
};

class Three : public Two {
    Two b;
    public:
        Three() { cout << "3 "; }
        ~Three() { cout << "-3 "; }
};
int main() {
    Three t1;
    return 0;
}
