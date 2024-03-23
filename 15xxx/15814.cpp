#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int t; cin >> t;

  while (t--) {
    int a, b; cin >> a >> b;
    swap(s[a], s[b]);
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}