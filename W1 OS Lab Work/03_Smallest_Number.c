#include <stdio.h>

int main() {
  int arr[5], min, i, pos = 0;
  printf("Enter 5 elements: ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  min = arr[0];
  for (i = 1; i < 5; i++) {
    if (arr[i] < min) {
      min = arr[i];
      pos = i;
    }
  }
  printf("%d at %d\n", min, pos);
}
