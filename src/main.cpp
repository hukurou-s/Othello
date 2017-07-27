#include "piece.hpp"
#include <iostream>

int main() {

  Piece* piece = new Piece;

  std::string color = piece->getColor();
  std::cout << color << std::endl;

  piece->changeColor("BLACK");

  color = piece->getColor();
  std::cout << color << std::endl;

  return 0;

}
