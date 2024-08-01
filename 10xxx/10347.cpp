#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

const string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  string s; cin >> s;
  reverse(s.begin(), s.end());
  for (char &c : s) {
    c = key[(key.find(c) + n) % key.size()];
  }
  cout << s << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}