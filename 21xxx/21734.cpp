#include <iostream>
#include <string>
using namespace std;

int ascii_sum(char c) {
  int ret = 0;
  while (c) {
    ret += c % 10;
    c /= 10;
  }
  return ret;
}

void solve(void) {
  string s; cin >> s;

  for (char c : s) {
    int sum = ascii_sum(c);
    for (int i=0; i<sum; i++) cout << c;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}