// Incomplete code for the Box it! problem statement. It does not work right now!

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box {
    private:
        int l, b, h;
    
    public:
        // Constructors
        Box() {
            l = b = h = 0;
        }
        Box(int length, int breadth, int height) {
            l = length;
            b = breadth;
            h = height;
        }
        Box(const Box& B) {
            l = B.l;
            b = B.b;
            h = B.h;
        }
        
        // getter functions
        int getLength() {
            return(l);
        }
        int getBreadth() {
            return(b);
        }
        int getHeight() {
            return(h);
        }
        
        // calculate value
        long long CalculateVolume() {
            // return l*b*h;
            // return long(l)*b*h;
            return static_cast<long long>(l)*b*h;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
