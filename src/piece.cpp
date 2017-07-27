#include "piece.hpp"

#include <iostream>

Piece::Piece() : piece_color("EMPTY") {}

// Piece::Piece(const Piece& other) {}    // コピーコンストラクタ

Piece::~Piece() {}

/*
  Piece& Piece::operator=(const Piece& other)    // 代入演算子
  {
  if (this != &other) {
  this->setColor(other->getColor());
  }
  return *this;
  }
*/

void Piece::changeColor(std::string color)
{
  piece_color = color;
}

std::string Piece::getColor()
{
  return this->piece_color;
}

void Piece::setColor(std::string color)
{
  piece_color = color;
}


