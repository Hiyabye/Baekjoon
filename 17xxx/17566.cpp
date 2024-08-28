#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int m, b, s; cin >> m >> b >> s;
  vector<long long> v(b, 0);
  for (int i=0; i<b; i++) {
    string t; cin >> t;
    reverse(t.begin(), t.end());
    for (char c : t) v[i] = v[i] * 2 + (c == '1');
  }

  long long ans = 0;
  for (int i=0; i<b; i++) {
    if ((v[i] >> (m-1)) & 1) ans |= v[i];
  }
  cout << (ans ? __builtin_popcountll(ans) - 1 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}