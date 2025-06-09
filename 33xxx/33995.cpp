#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  vector<int> f(26, 0);
  for (char c : s) f[c - 'a']++;

  for (int x : f) {
    if (!x) return true;
  }
  return *min_element(f.begin(), f.end()) <= k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}