#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  s = s.substr(4) + s.substr(0, 4);

  int sum = 0;
  for (char c : s) {
    if ('0' <= c && c <= '9') {
      sum = sum * 10 + c - '0';
    } else {
      sum = sum * 100 + c - 'A' + 10;
    }
    sum %= 97;
  }
  return sum == 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "correct" : "incorrect");
  return 0;
}