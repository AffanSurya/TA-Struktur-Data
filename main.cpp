#include "search.h"
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
  cout << endl;

  return pilih;
}

int main() {
  int jumlahData, x, result;
  char pilih;
  int arr[100];
  int n = sizeof(arr) / sizeof(0);

  do {
    system("cls");
    cout << "Berapa jumlah data yang ingin anda input: ";
    cin >> jumlahData;

    for (int i = 0; i < jumlahData; i++) {
      cout << "Data -" << i + 1 << endl;
      cin >> arr[i];
    }

    cout << endl;
    switch (menu()) {
    case 1:
      cout << "Binary Search" << endl;
      cout << "Angka berapa yang ingin anda cari: ";
      cin >> x;

      sort(arr, arr + n);

      result = binarySearch(arr, 0, n - 1, x);

      if (result == -1) {
        cout << "\nNilai tidak ditemukan" << endl;
      } else {

        cout << "\nNilai ditemukan " << arr[result] << endl;
      }
      break;

    case 2:
      cout << "Binary Search" << endl;
      cout << "Angka berapa yang ingin anda cari: ";
      cin >> x;

      result = linearSearch(arr, n, x);

      if (result == -1) {
        cout << "\nNilai tidak ditemukan" << endl;
      } else {

        cout << "\nNilai ditemukan " << arr[result] << endl;
      }
      break;

    case 3:
      cout << "Binary Search" << endl;
      cout << "Angka berapa yang ingin anda cari: ";
      cin >> x;

      result = jumpSearch(arr, n, x);

      if (result == -1) {
        cout << "\nNilai tidak ditemukan" << endl;
      } else {

        cout << "\nNilai ditemukan " << arr[result] << endl;
        cout << "array ini" << endl;
      }
      break;

      // default:
      //   cout << "Pilihan Anda Tersedia" << endl;
      //   break;
    }

    cout << endl;
  ulang:
    cout << "Apakah anda ingin mencoba yang lain (Y/T): ";
    cin >> pilih;
    if ((pilih == 'T') || (pilih == 't')) {
      cout << "Terimakasih Telah Menggunakannya Program Kami" << endl;
      break;
    } else if ((pilih == 'Y') || (pilih == 'y')) {
      continue;
    } else {
      cout << "Pilihan Anda Tersedia" << endl;
      goto ulang;
    }

  } while (true);

  return 0;
}
