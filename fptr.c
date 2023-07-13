#include <stdio.h>
int main() {
    FILE *fptr;
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
fptr = fopen("table.c","w");
fprintf(fptr,"%d",n);

  for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
fclose(fptr);
  return 0;
}

