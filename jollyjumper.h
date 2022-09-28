#pragma once
#include <malloc.h>
#include <stdbool.h>

int isJollyJumber(const int seq[], int size) {
  // array with the differences
  int diffs[size - 1];
  // iterate for every difference
  for (int i = 0; i < size - 1; i++) {
    int num1 = seq[i];
    int num2 = seq[i + 1];

    if (num1 > num2) {
      diffs[i] = num1 - num2;
    } else {
      diffs[i] = num2 - num1;
    }
  }

  // boolean array Diffs_found, and initalize values
  bool diffs_found[size];
  for (int i = 0; i < size; i++) {
    diffs_found[i] = false;
  }

  // Iterate over diffrences
  for (int i = 0; i < size - 1; i++) {
    int diff = diffs[i];
    if (diffs_found[diff] == false && diff > 0 && diff <= size) {
      diffs_found[diff] = true;
    } else {
      return 0;
    }
  }
  // If it made it through the for-loop, every difference is different.
  return 1;
}
