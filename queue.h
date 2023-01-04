#include <iostream>

using namespace std;

int ukuran = 6, front = 0, back = 0;
int array2[6];

bool isFull() { return (back == ukuran) ? true : false; }

bool isEmpty() { return (back == 0) ? true : false; }

int countArray() { return (isEmpty()) ? 0 : (isFull()) ? ukuran : back; }

void destroyArray() {
  for (int i = 0; i < ukuran; i++) {
    array2[i] = 0;
  }
  front = 0;
  back = 0;
}

void enqueueArray(int data) {
  if (!isFull()) {
    if (!isEmpty()) {
      array2[back] = data;
      back++;
    } else {
      array2[0] = data;
      front++;
      back++;
    }
    cout << "Data antrian (" << data
         << ") sudah berhasil di masukkan pada antrian ke-" << countArray();
  } else {
    cout << "Gagal menambah, antrian penuh!! Sudah ada " << countArray()
         << " data\n\n";
  }
}

void dequeueArray() {
  if (!isEmpty()) {
    cout << "Data antrian " << array2[0] << " berhasil di hapus\n";
    for (int i = 0; i < back; i++) {
      array2[i] = array2[i + 1];
    }
    back--;
  } else {
    cout << "Data kosong!!\n";
  }
}

void displayArray() {
  if (!isEmpty()) {
    cout << "Data di antrian array (" << countArray() << "): \n";
    for (int i = 0; i < ukuran; i++) {
      if (array2[i] != 0) {
        cout << "Data " << i + 1 << ": " << array2[i] << endl;
      }
    }
    cout << endl;
  } else {
    cout << "Data kosong!!" << endl;
  }
}