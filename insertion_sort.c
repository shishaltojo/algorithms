#include<stdio.h>

void swap(int* a, int* b) {
  int c;

  c = *a;
  *a = *b;
  *b = c;
}

void insertion_sort(int s[], int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    j = i;
    while ((j > 0) && (s[j] < s[j - 1])) {
      swap(&s[j], &s[j - 1]);
      j = j - 1;
    }
  }
}

int main() {
  int s[5] = {4, 3, 2, 1, 0};
  int n = 5;

  insertion_sort(s, n);

  for (int i = 0; i < n; i++) {
    printf("%d\n", s[i]);
  }

  return 0;
}