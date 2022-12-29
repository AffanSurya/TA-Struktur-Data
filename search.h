#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

int binarySearch(int arr[], int indexAwal, int indexAkhir, int target) {
  sort(arr, arr + indexAkhir);

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

int jumpSearch(int arr[], int ukuran, int target) {
  sort(arr, arr + ukuran);
  int jump = sqrt(ukuran);
  int prev = 0;

  while (arr[min(jump, ukuran) - 1] < target) {
    prev = jump;
    jump += sqrt(ukuran);
    if (prev >= ukuran) {
      return -1;
    }
  }

  while (arr[prev] < target) {
    prev++;

    if (prev == min(jump, ukuran)) {
      return -1;
    }
  }
  if (arr[prev] == target) {
    return prev;
  }
  return -1;
}