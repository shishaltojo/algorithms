// Pseudocode

// NearestNeighbor(P)
//   Pick and visit an initial point p_0 from p
//   p = p_0
//   i = 0
//   While there are still unvisited points
//   i = i + 1
//   Select pi to be the closest unvisited point to p_(i-1)
//   Visit p_i
//   Return to p_0 from p_(n-1)

#include<stdio.h>

class Board {
  private:
    int width;
    int height;
};

class Point {
  private:
    float x;
    float y;
};

int main() {
  printf("yolo\n");

  return 0;
}