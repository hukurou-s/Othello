#include "piece.hpp"

#include <iostream>

using namespace std;

Piece::Piece() : piece_color("EMPTY")
{
  cout << "EMPTYで初期化(デバッグ出力)" << endl;
}

void Piece::changeColor(string color)
{
  piece_color = color;
}

