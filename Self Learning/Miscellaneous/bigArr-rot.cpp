// Program in C++ to perform Array rotation with huge sample data.
#include <iostream>
#include <cstdlib>
#include<unistd.h>
using namespace std;

int main() {
  unsigned int microsecond = 1500000;
  int size = 20000;
  int eRange = 9999;
  int arr[20000];
  for(int i=0; i<20000; i++) {
    arr[i] = rand() % eRange;
    //cout << arr[i];
  }

  cout << "Original Array:- " << endl;
  usleep(1 * microsecond);//sleeps for 1.5 second
  for(int i=0; i<size; i++) {
    int p=i;
    cout << p+1 << ".\t\t" << arr[i] << "\n";
  }
  cout << "\n";
  int rot = 3;
  for(int i=1; i<=rot; i++) {
    int temp = arr[0];
    for(int j=0; j<size-1; j++) {
      arr[j] = arr[j+1];
    }
    arr[size-1] = temp;
    cout << "\nRotation " << i << ":-" << endl;
    usleep(1 * microsecond);//sleeps for 1.5 second
    for(int i=0; i<size; i++) {
      cout << arr[i] << "\n";
    }
  }

  /*cout << "\n\nArray after " << rot << " rotations." << endl;
  for(int i=0; i<size; i++) {
    cout << arr[i] << "\t";
  }*/

  return 0;
}
