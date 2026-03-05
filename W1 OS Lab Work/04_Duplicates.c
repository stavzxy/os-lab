#include <stdio.h>

int main() {
  int arr[5], i, j;
  printf("Enter 5 elements: ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      if (i != j && arr[i] == arr[j]) {
        printf("Duplicate\n");
        return 0;
      }
  printf("No Duplicates\n");
  return 0;
}
