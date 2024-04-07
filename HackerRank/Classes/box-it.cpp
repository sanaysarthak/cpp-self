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
        friend bool operator<(Box &A, Box &B) {
            if ( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.b == B.b) && (A.l==B.l)) )
                return true;
            else
                return false;
        }
        
        // Insertion (<<) Operator Overloading
        friend ostream &operator<<(ostream &output, Box c) {
            output << c.l << " " << c.b << " " << c.h;
            return output;
        }
};


 

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
