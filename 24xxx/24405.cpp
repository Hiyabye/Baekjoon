#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  return (s.find("(") + 1) * 2 == s.length();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "correct" : "fix");
  return 0;
}