// Program in C++ to perform Array rotation with huge sample data.
#include <iostream>
#include <cstdlib>
#include<unistd.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

/* for sleep in Windows
#include<windows.h>
Sleep(milliseconds); */

void arrayRotation(int arr[], int rot, int size);

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
  //usleep(1 * microsecond); // sleeps for 1.5 second
  for(int i=0; i<size; i++) {
    int p=i;
    cout << p+1 << ".\t\t" << arr[i] << "\n";
  }
  int rot;
  cout << "\n";
  cout << "Enter number of rotations you want to make: ";
  cin >> rot;

  // Get starting timepoint
  auto start = high_resolution_clock::now();
  
  arrayRotation(arr, rot, size);

  // Get ending timepoint
  auto stop = high_resolution_clock::now();
  
  //usleep(1 * microsecond); // sleeps for 1.5 second
  cout << "\n\nArray after " << rot << " rotations." << endl;
  usleep(1 * microsecond); // sleeps for 1.5 second
  for(int i=0; i<size; i++) {
    cout << arr[i] << "\n";
  }

  auto duration = duration_cast<microseconds>(stop - start);

  cout << "\n\nTime taken to perform " << rot << " rotations:-\n" << duration.count() << " microseconds" << endl;

  return 0;
}

void arrayRotation(int arr[], int rot, int size) {
  for(int i=1; i<=rot; i++) {
    int temp = arr[0];
    for(int j=0; j<size-1; j++) {
      arr[j] = arr[j+1];
    }
    arr[size-1] = temp;
    /*cout << "\nRotation " << i << ":-" << endl;
    usleep(1 * microsecond);//sleeps for 1.5 second
    for(int i=0; i<size; i++) {
      cout << arr[i] << "\n";
    }*/
  }
}
