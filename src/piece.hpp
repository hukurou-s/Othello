#ifndef PIECE_HPP
#define PIECE_HPP

#include <string>

class Piece
{

public:
  Piece();    // EMPTYで初期化

  void changeColor(std::string color);

private:
  std::string piece_color;

};

#endif // PIECE_HPP
