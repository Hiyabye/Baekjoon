#include "aplusb.h"

std::vector<int> _A, _B;

void initialize(std::vector<int> A, std::vector<int> B) {
  _A = A; _B = B;
}

int answer_question(int i, int j) {
  return _A[i] + _B[j];
}