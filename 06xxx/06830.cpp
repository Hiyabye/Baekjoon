#include <iostream>
#include <string>
#include <utility>
using namespace std;

void solve(void) {
  pair<string, int> ans = make_pair("", 1e9);

  string s = ""; int n;
  while (s != "Waterloo") {
    cin >> s >> n;
    if (n < ans.second) ans = make_pair(s, n);
  }
  cout << ans.first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}