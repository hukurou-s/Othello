#include "square.hpp"
#include <iostream>

int main() {

  Square* square = new Square;

  std::string piece_color = square->getPieceColor();
  std::cout << piece_color << std::endl;

  square->changePieceColor("WHITE");

  piece_color = square->getPieceColor();
  std::cout << piece_color << std::endl;

  return 0;

}
