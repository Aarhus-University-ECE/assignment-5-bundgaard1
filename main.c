#include <assert.h>
#include <malloc.h>
#include <stdio.h>

#include "circle.h"
#include "jollyjumper.h"

int main(void) {
  /*testing circles - make sure that you know how it works and what it is
   * supposed to print out*/

  /*
  circle c[5];
  fiveCircles(c);
  for (int i = 0; i < 5; i++) {
    printCircle(c[i]);
  }
  point p;
  p.x = 2;
  p.y = 2;

  translate(&c[1], &p);
  printf("You are here \n");
  printCircle(c[1]);
  printf("isValid: %d \n", circleIsValid(&c[1]));
  */

  /*answer to exercise 7.b*/
  int n; /*number of numbers to read*/
  /*readin n and check that is is OK*/
  scanf("%d", &n);
  assert(n > 0);

  int *numbers = malloc(sizeof(int) * n); /*the numbers read*/

  /*readin the n numbers in the array numbers*/
  for (int i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  if (isJollyJumber(numbers, n)) {
    printf("Jolly");
  } else {
    printf("not Jolly");
  }
  return 0;
}
