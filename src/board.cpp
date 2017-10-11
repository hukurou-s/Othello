#include "board.hpp"
#include <iostream>

Board::Board()
{
  this->resize(9, 9);
}

void Board::resize(int width, int height) {
  this->width = width;
  this->height = height;

  for ( int i = 0; i < height; i++ ) {
    board.push_back(std::vector<Square*>());
    for ( int j = 0; j < width; j++ ) {
      board[i].push_back(new Square());
    }
  }
}

void Board::show() {
  board[2][3]->changePieceColor("WHITE");
  for (auto line: board) {
    for (Square* s: line) {
      std::cout << s->getPieceColor() << " ";
    }
    std::cout << std::endl;
  }
}

