#include <algorithm>
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j - 1], arr[j]);
      }
    }
  }
}

void quickSort(int arr[], int n) {
  int indexAwal = 0;
  int indexAkhir = n - 1;
  int i = indexAwal;
  int j = indexAkhir;
  int pivot = arr[(i + j) / 2];

  while (i <= j) {
    while (arr[i] < pivot) {
      i++;
    }

    while (arr[j] > pivot) {
      j--;
    }

    if (i <= j) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  if (indexAwal < j) {
    quickSort(arr, j - 1);
  }

  if (i < indexAkhir) {
    quickSort(arr, i);
  }
}
