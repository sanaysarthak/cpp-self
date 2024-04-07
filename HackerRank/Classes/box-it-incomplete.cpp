#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box {
    private:
        // length l, breadth b, height h
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
        Box(Box& B) {
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
        
        // Binary (Relational <) Operator Overloading
        friend bool operator<(Box &A, Box &B);
        
        // Insertion (<<) Operator Overloading
        friend ostream &operator<<(ostream &output, Box c);
};

bool operator<(Box &A, Box &B) {
    if ( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.b == B.b) && (A.l==B.l)) )
        return true;
    else
        return false;
 }
 
ostream &operator<<(ostream &output, Box c) {
    output << c.l << " " << c.b << " " << c.h;
    return output;
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Box b1; // Should set b1.l = b1.b = b1.h = 0;
        Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
        b2.getLength();    // Should return 2
        b2.getBreadth(); // Should return 3
        b2.getHeight();    // Should return 4
        b2.CalculateVolume(); // Should return 24
        bool x = (b1 < b2);    // Should return true based on the conditions given
        cout << bool(x);
        cout << b2; // Should print 2 3 4 in order. 
    return 0;
}
