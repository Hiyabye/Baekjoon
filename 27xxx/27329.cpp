#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  return s.substr(0, n/2) == s.substr(n/2, n/2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}