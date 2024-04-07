#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solve(void) {
  string s; cin >> s;

  vector<int> cnt(26, 0);
  for (char c : s) {
    cnt[c - 'a']++;
  }

  int odd = 0, even = 0;
  for (int n : cnt) {
    if (n == 0) continue;
    if (n & 1) odd++;
    else even++;
  }

  if (!odd && even) return 0;
  if (odd && !even) return 1;
  return 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  cout << solve();
  return 0;
}