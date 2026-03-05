#include <stdio.h>

int main() {
  int arr[3], i, x;
  printf("Enter three elements: ");
  for (i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter an element to search: ");
  scanf("%d", &x);
  for (i = 0; i < 3; i++) {
    if (arr[i] == x) {
      printf("Element is at %d\n", i);
      return 0;
    }
  }
  printf("Element is not there in the array\n");
  return 1;
}
