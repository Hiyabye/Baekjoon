#include <iostream>
#include <regex>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  return regex_match(s, regex("(100+1+|01)+"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "SUBMARINE" : "NOISE");
  return 0;
}