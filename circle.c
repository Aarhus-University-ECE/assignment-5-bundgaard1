#include "circle.h"

#include <malloc.h>
#include <stdbool.h>

void fiveCircles(circle c[]) {
  /*post: returns an array with five circles - solution to 6.b*/
  for (int i = 0; i < 5; i++) {
    c[i].p.x = i;
    c[i].p.y = i;
    c[i].r = i;
  }
  return;
}

bool circleIsValid(const circle* c) {
  /*post: answer to exercise 6.c*/
  if (c->r > 0) {
    return true;
  } else {
    return false;
  }
}

void translate(circle* c, const point* point) {
  /* ansver to exercise 6.d */
  // Calculate
  int newX = c->p.x + point->x;
  int newY = c->p.y + point->y;

  c->p.x = newX;
  c->p.y = newY;
}
