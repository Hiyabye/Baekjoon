#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  return s.front() != s.back();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Win" : "Lose");
  return 0;
}