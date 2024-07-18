#include "timecard.h"

static int N;

void init(int n) {
  N = n;
}

std::string convert(std::string s) {
  for (char &c : s) {
    if ('A' <= c && c <= 'Z') {
      c = c - 'A' + 'a';
    }
  }
  return s;
}