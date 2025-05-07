#include "../bubblesort.c"


void prarr(const U8 arr[], const U32 arrlen) {
  U32 j;

  for (j = 0; j < arrlen; j++)
    printf("%d ", arr[j]);
  putchar('\n');
}


I32 main(void) {
  U8  arr[] = {10,9,8,7,6,5,4,3,2,1};

  prarr(arr, 10);
  bbs8(arr, 10);
  prarr(arr, 10);

  return 0;
}
