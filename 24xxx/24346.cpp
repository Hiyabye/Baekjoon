#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  map<char, int> mp;
  for (char c : s) mp[c]++;

  int odd = 0;
  for (auto &[_, x] : mp) {
    if (x & 1) odd++;
  }
  cout << (odd ? odd : 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}