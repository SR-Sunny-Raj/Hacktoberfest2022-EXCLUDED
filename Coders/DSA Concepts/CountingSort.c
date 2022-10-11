#include <stdio.h>
void countingSort(int a[], int size)
{
  int b[10];
  int max = a[0];
  for (int i = 1; i < size; i++) {
    if (a[i] > max)
      max = a[i];
  }
  int count[10];
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
  for (int i = 0; i < size; i++) {
    count[a[i]]++;
  }
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    b[count[a[i]] - 1] = a[i];
    count[a[i]]--;
  }
  for (int i = 0; i < size; i++) {
    a[i] = b[i];
  }
}
void printArray(int a[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", a[i]);
  }
  printf("\n");
}
int main() {
  int a[] = {1,1,2,3,4,5,1,6};
  int n = 8;
  countingSort(a, n);
  printArray(a, n);
}
