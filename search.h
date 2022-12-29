#include <iostream>

using namespace std;

int binarySearch(int arr[], int indexAwal, int indexAkhir, int target) {
  if (indexAkhir >= indexAwal) {
    int mid = indexAwal + (indexAkhir - indexAwal) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (target > arr[mid]) {
      return binarySearch(arr, mid + 1, indexAkhir, target);
    } else {
      return binarySearch(arr, indexAwal, mid - 1, target);
    }
  }
  return -1;
}

int linearSearch(int arr[], int indexAkhir, int target) {
  for (int i = 0; i < indexAkhir; i++) {
    if (arr[i] == target) {
      return i;
    }
  }

  return -1;
}