#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  cin.ignore();
  string s; getline(cin, s);
  unordered_map<char, int> m;
  for (char c : s) m[c]++;

  int ans = 0, val = 0;
  for (auto p : m) {
    if (p.first == ' ' || p.first == ',' || p.first == '.') continue;
    if (p.second > ans) ans = p.second, val = p.first;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}