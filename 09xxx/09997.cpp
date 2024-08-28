#include <iostream>
#include <string>
#include <vector>
using namespace std;

int calc(int n, const vector<int> &v, int idx, int cur) {
  if (idx == n) return __builtin_popcount(cur) == 26;
  return calc(n, v, idx+1, cur) + calc(n, v, idx+1, cur | v[idx]);
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n, 0);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (char c : s) v[i] |= 1 << (c - 'a');
  }
  cout << calc(n, v, 0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}