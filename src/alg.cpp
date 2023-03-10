// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = 0;
  int result = 0;
  int middle;
  while (l <= r) {
    middle = (l + r) / 2;
    if (arr[middle] == value) {
      int i = middle + 1;
      while ((arr[i] == value) && (r >= i)) {
        result++;
        i++;
      }
      int i = middle - 1;
      while ((arr[i] == value) && (l <= i)) {
        result++;
        i--;
      }
    } else if (arr[middle] > value) {
      r = middle - 1;
    } else {
      l = middle + 1;
    }
  }
  return result;
}
