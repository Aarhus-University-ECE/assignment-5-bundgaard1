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

void fiveCircles(circle c[]) {}

int circleIsValid(const circle* c) {}

void translate(circle* c, const point* point) {}