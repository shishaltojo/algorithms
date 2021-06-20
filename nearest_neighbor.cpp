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

  public:
    Board(int width, int height) {
      this -> width = width;
      this -> height = height;
    }

    int getWidth() {
      return width;
    }

    int getHeight() {
      return height;
    }
};

class Point {
  private:
    float x;
    float y;

  public:
    Point(Board board, float x, float y) {
      if (x > board.getWidth() || y > board.getHeight()) {
        throw 1;
      }

      this -> x = x;
      this -> y = y;
    }

    int getX() {
      return x;
    }

    int getY() {
      return y;
    }
};

int main() {
  Board board(10, 20);
  Point point_1(board, 10, 20);

  return 0;
}