#include "includes/types32.c"


void bbs8(U8 arr[], const U32 arrlen) {
  U32 j, k;
  U8  tmp;

  if (arrlen < 2)
    return;

  for (j = arrlen - 1; j > 0; j--) {
    for (k = 0; k < j; k++) {
      if (arr[k] > arr[k + 1]) {
        tmp        = arr[k];
        arr[k]     = arr[k + 1];
        arr[k + 1] = tmp;
      }
    }
  }
}


void bbs16(U16 arr[], const U32 arrlen) {
  U32 j, k;
  U16 tmp;

  if (arrlen < 2)
    return;

  for (j = arrlen - 1; j > 0; j--) {
    for (k = 0; k < j; k++) {
      if (arr[k] > arr[k + 1]) {
        tmp        = arr[k];
        arr[k]     = arr[k + 1];
        arr[k + 1] = tmp;
      }
    }
  }
}


void bbs32(U32 arr[], const U32 arrlen) {
  U32 j, k;
  U32 tmp;

  if (arrlen < 2)
    return;

  for (j = arrlen - 1; j > 0; j--) {
    for (k = 0; k < j; k++) {
      if (arr[k] > arr[k + 1]) {
        tmp        = arr[k];
        arr[k]     = arr[k + 1];
        arr[k + 1] = tmp;
      }
    }
  }
}
