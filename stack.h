#include <iostream>

using namespace std;

int ukuranStack = 6, top = 0;
int array3[6];

bool stackFull() { return (top == ukuranStack) ? true : false; }

bool stackEmpty() { return (top == 0) ? true : false; }

int countStack() { return (stackEmpty()) ? 0 : top; }

void pushStack(int data) {
  if (!stackFull()) {
    array3[top] = data;
    top++;
    cout << "Data tumpukan (" << data
         << ") sudah berhasil di masukkan pada tumpukan ke-" << countStack();
  } else {
    cout << "Gagal push, stack sudah penuh!! sudah ada " << countStack()
         << " data\n";
  }
}

void popStack() {
  if (!stackEmpty()) {
    cout << "Data tumpukan " << array3[top] << " berhasil di hapus\n";
    array3[top - 1] = 0;
    top--;
  } else {
    cout << "Data kosong!!\n";
  }
}

// void destroyStack() {
//   for (int i = 0; i < top; i++) {
//     array3[i] = 0;
//   }
//   top = 0;
// }

void displayStack() {
  if (!stackEmpty()) {
    cout << "Data di stack array: \n";
    for (int i = ukuranStack - 1; i >= 0; i--) {
      if (array3[i] != 0) {
        cout << "Data " << i + 1 << ": " << array3[i] << endl;
      }
    }
    cout << endl;
  } else {
    cout << "Data kosong!!\n";
  }
}