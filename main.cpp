#include "queue.h"
#include "search.h"
#include "sort.h"
#include "stack.h"
#include <iostream>

using namespace std;

int menu();
void isiArray(int arr[], int jumlahData);

int main() {
  int jumlahData, x, result, dataAntrian, dataTumpukan;
  char pilih;
  int arr[100];
  int arr2[6];
  // int n = sizeof(arr) / sizeof(0);

  do {
    system("cls");

    if (jumlahData != 0) {
      cout << "Array anda :" << endl;
      isiArray(arr, jumlahData);
      cout << endl;
    }

    if (!queueEmpty()) {
      displayQueue();
    }

    if (!stackEmpty()) {
      displayStack();
    }

    switch (menu()) {
    case 1:
      cout << "Binary Search\n\n";
      if (jumlahData == 0) {
        cout << "Berapa jumlah data yang ingin anda input: ";
        cin >> jumlahData;

        for (int i = 0; i < jumlahData; i++) {
          cout << "Data " << i + 1 << ": ";
          cin >> arr[i];
        }
      }
      cout << "\nAngka berapa yang ingin anda cari: ";
      cin >> x;

      result = binarySearch(arr, 0, jumlahData - 1, x);

      if (result == -1) {
        cout << "\nNilai tidak ditemukan";
      } else {

        cout << "\nNilai ditemukan " << arr[result];
      }
      break;

    case 2:
      cout << "Linear Search\n\n";
      if (jumlahData == 0) {
        cout << "Berapa jumlah data yang ingin anda input: ";
        cin >> jumlahData;

        for (int i = 0; i < jumlahData; i++) {
          cout << "Data " << i + 1 << ": ";
          cin >> arr[i];
        }
      }
      cout << "\nAngka berapa yang ingin anda cari: ";
      cin >> x;

      result = linearSearch(arr, jumlahData, x);

      if (result == -1) {
        cout << "\nNilai tidak ditemukan";
      } else {

        cout << "\nNilai ditemukan " << arr[result];
      }
      break;

    case 3:
      cout << "Jump Search\n\n";
      if (jumlahData == 0) {
        cout << "Berapa jumlah data yang ingin anda input: ";
        cin >> jumlahData;

        for (int i = 0; i < jumlahData; i++) {
          cout << "Data " << i + 1 << ": ";
          cin >> arr[i];
        }
      }
      cout << "\nAngka berapa yang ingin anda cari: ";
      cin >> x;

      result = jumpSearch(arr, jumlahData, x);

      if (result == -1) {
        cout << "\nNilai tidak ditemukan";
      } else {

        cout << "\nNilai ditemukan " << arr[result];
      }
      break;

    case 4:
      cout << "Bubble Sort\n\n";
      if (jumlahData == 0) {
        cout << "Berapa jumlah data yang ingin anda input: ";
        cin >> jumlahData;

        for (int i = 0; i < jumlahData; i++) {
          cout << "Data " << i + 1 << ": ";
          cin >> arr[i];
        }
      }

      bubbleSort(arr, jumlahData);
      cout << "\nHasil sortir: ";
      for (int i = 0; i < jumlahData; i++) {
        cout << arr[i] << " ";
      }
      break;

    case 5:
      cout << "Insertion Sort\n\n";
      if (jumlahData == 0) {
        cout << "Berapa jumlah data yang ingin anda input: ";
        cin >> jumlahData;

        for (int i = 0; i < jumlahData; i++) {
          cout << "Data " << i + 1 << ": ";
          cin >> arr[i];
        }
      }

      insertionSort(arr, jumlahData);
      cout << "\nHasil sortir: ";
      for (int i = 0; i < jumlahData; i++) {
        cout << arr[i] << " ";
      }
      break;

    case 6:
      cout << "Quick Sort\n\n";
      if (jumlahData == 0) {
        cout << "Berapa jumlah data yang ingin anda input: ";
        cin >> jumlahData;

        for (int i = 0; i < jumlahData; i++) {
          cout << "Data " << i + 1 << ": ";
          cin >> arr[i];
        }
      }

      quickSort(arr, 0, jumlahData);
      cout << "\nHasil sortir: ";
      for (int i = 0; i < jumlahData; i++) {
        cout << arr[i] << " ";
      }
      break;

    case 7:
      cout << "Enqueue\n\n";
      cout << "Maksimal antrian yang tersedia adalah 6\n\n";
      cout << "Masukkan data antrian: ";
      cin >> dataAntrian;
      enqueueArray(dataAntrian);
      break;

    case 8:
      cout << "Dequeue\n\n";
      dequeueArray();
      break;

    case 9:
      cout << "Push\n\n";
      cout << "Maksimal tumpukan yang tersedia adalah 6\n\n";
      cout << "Masukkan data tumpukan: ";
      cin >> dataTumpukan;
      pushStack(dataTumpukan);
      break;

    case 10:
      cout << "Pop\n\n";
      popStack();
      break;

    default:
      cout << "Pilihan Anda Tidak Tersedia" << endl;
      break;
    }

    cout << endl;
  ulang:
    cout << "\nApakah anda ingin mencoba yang lain? (Y/T): ";
    cin >> pilih;
    if ((pilih == 'T') || (pilih == 't')) {
      cout << "\nTerimakasih Telah Menggunakan Program Kami" << endl;
      break;
    } else if ((pilih == 'Y') || (pilih == 'y')) {
      continue;
    } else {
      cout << "\nPilihan Anda Tidak Tersedia" << endl;
      goto ulang;
    }
  } while (true);

  return 0;
}

//=====================================================================================
int menu() {
  int pilih;
  cout << "======== Menu yang Tersedia ========" << endl;
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
  cout << endl;

  return pilih;
}

void isiArray(int arr[], int jumlahData) {
  for (int i = 0; i < jumlahData; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}