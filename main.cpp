#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

int menu() {
  int pilih;

  cout << "1. Binary Searh" << endl;
  cout << "2. Linear Searh" << endl;
  cout << "3. Jump Searh" << endl;
  cout << "4. Bubble Sort" << endl;
  cout << "5. Insertion Sort" << endl;
  cout << "6. Quick Sort" << endl;
  cout << "7. Enqueue" << endl;
  cout << "8. Dequeue" << endl;
  cout << "9. Push" << endl;
  cout << "10. Pop" << endl << endl;

  cout << "Pilihan Anda: ";
  cin >> pilih;

  return pilih;
}

int main() {
  menu();
  return 0;
}
