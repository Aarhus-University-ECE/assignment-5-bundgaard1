#include "jollyjumper.h"

#include <malloc.h>
#include <stdbool.h>

bool isJollyJumber(const int seq[], int size) {
  // array with the differences
  int diffs[size - 1];
  // iterate for every difference and calculate the difference
  for (int i = 0; i < size - 1; i++) {
    int num1 = seq[i];
    int num2 = seq[i + 1];

    // to get the absoulute difference
    if (num1 > num2) {
      diffs[i] = num1 - num2;
    } else {
      diffs[i] = num2 - num1;
    }
  }

  // boolean array diffs_found, and initalize values to false
  bool diffs_found[size];
  for (int i = 0; i < size; i++) {
    diffs_found[i] = false;
  }

  // Iterate over diffrences
  // Makes sure all differences are between 1 and n,
  // And no doublicates
  for (int i = 0; i < size - 1; i++) {
    int diff = diffs[i];
    if (diffs_found[diff] == false) {
      diffs_found[diff] = true;
    } else if (diffs_found[diff] == true) {
      return 0;
    }
  }
  // If it made it through the for-loop, every difference is different.
  return 1;
}
