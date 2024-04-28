#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  
  vector<int> cnt(26, 0);
  for (char c : s) {
    cnt[c - 'a']++;
  }

  int ans = 0;
  for (int x : cnt) {
    if (x & 1) ans++;
  }
  cout << max(0, ans - 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}