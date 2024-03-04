#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  cout << (s.length() <= 2 || s.front() != '\"' || s.back() != '\"' ? "CE" : s.substr(1, s.length()-2));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}