// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = 0;
  int result = 0;
  int mid;
  while (l <= r) {
    mid = (l + r) / 2;
    if (arr[mid] == value) {
      for (int i = 0; arr[mid] == arr[mid + 1]; i++) {
        result++;
      }
      for (int i = 1; arr[mid] == arr[mid - 1]; i++) {
        result++;
      }
    } else if (arr[mid] > value) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
    return result;
  }
  return 0;
}
