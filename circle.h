#pragma once
typedef struct point {
  int x;
  int y;
} point;

/*add your definition of circle here. You need top call it "circle"*/
typedef struct {
  point p;
  int r;
} circle;

void printCircle(circle c) {
  printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

void fiveCircles(circle c[]) {
  /*post: returns an array with five circles - solution to 6.b*/
  for (int i = 0; i < 5; i++) {
    c[i].p.x = i;
    c[i].p.y = i;
    c[i].r = i;
  }
  return;
}

int circleIsValid(const circle* c) {
  if (c->r > 0) {
    return 1;
  } else {
    return 0;
  }
}

void translate(circle* c, const point* point) {
  int newX = c->p.x + point->x;
  int newY = c->p.y + point->y;

  c->p.x = newX;
  c->p.y = newY;

  return;
}