#include <iostream>

using namespace std;

int ukuranQueue = 6, front = 0, back = 0;
int array2[6];

bool queueFull() { return (back == ukuranQueue) ? true : false; }

bool queueEmpty() { return (back == 0) ? true : false; }

int countQueue() {
  return (queueEmpty()) ? 0 : (queueFull()) ? ukuranQueue : back;
}

// void destroyQueue() {
//   for (int i = 0; i < ukuranQueue; i++) {
//     array2[i] = 0;
//   }
//   front = 0;
//   back = 0;
// }

void enqueueArray(int data) {
  if (!queueFull()) {
    if (!queueEmpty()) {
      array2[back] = data;
      back++;
    } else {
      array2[0] = data;
      front++;
      back++;
    }
    cout << "Data antrian (" << data
         << ") sudah berhasil di masukkan pada antrian ke-" << countQueue();
  } else {
    cout << "Gagal menambah, antrian penuh!! Sudah ada " << countQueue()
         << " data\n\n";
  }
}

void dequeueArray() {
  if (!queueEmpty()) {
    cout << "Data antrian " << array2[0] << " berhasil di hapus\n";
    for (int i = 0; i < back; i++) {
      array2[i] = array2[i + 1];
    }
    back--;
  } else {
    cout << "Data kosong!!\n";
  }
}

void displayQueue() {
  cout << "Data di antrian anda (" << countQueue() << "): \n";
  if (!queueEmpty()) {

    for (int i = 0; i < ukuranQueue; i++) {
      if (array2[i] != 0) {
        cout << "Data " << i + 1 << ": " << array2[i] << endl;
      }
    }
    cout << endl;
  } else {
    cout << "Data kosong!!" << endl;
  }
}