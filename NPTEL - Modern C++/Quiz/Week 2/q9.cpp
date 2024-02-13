#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

// after getting an output, remove that particular function's code snippet and then run the code again.
int func(int, char* = 0) {
	cout << "1";
}
double func(double = 0, double = 0) {
	cout << "2";
}
float func(float, float, char* = 0) {
	cout << "3";
}
float func(float n) {
	cout << "4";
}
int func(int n1 = 0, int n2 = 0, int n3 = 0) {
	cout << "5";
}
int main() {
	func(2.1, 3.7f);
	return 0;
}
