#ifndef PIECE_HPP
#define PIECE_HPP

#include <string>

class Piece
{

public:
  Piece();    // EMPTYで初期化
  // Piece(const Piece& other);    // コピーコンストラクタ
  ~Piece();

  Piece& operator=(const Piece& other);    // 代入演算子

  void changeColor(std::string color);
  std::string getColor();
  void setColor(std::string color);

private:
  std::string piece_color;

};

#endif // PIECE_HPP

