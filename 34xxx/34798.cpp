#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  return s < t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}