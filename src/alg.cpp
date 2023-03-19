// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = size - 1;
  int result = 0;
  while (l <= r) {
    int middle = (l + r) / 2;
    if (arr[middle] > value) {
      r = middle - 1;
    } else if (arr[middle] < value) {
      l = middle + 1;
    } else {
      for (int i = 1; arr[middle] == arr[middle - i]; i++) {
        result++;
      }
      for (int i = 0; arr[middle] == arr[middle + i]; i++) {
        result++;
      }
        return result;
      }
    }
  return 0;
}
