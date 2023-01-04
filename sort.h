#include <algorithm>
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
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

void quickSort(int arr[], int left, int right) {
  int i = left;
  int j = right;
  int pivot = arr[(left + right) / 2];

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

  if (left < j) {
    quickSort(arr, left, j);
  }

  if (i < right) {
    quickSort(arr, i, right);
  }
}
